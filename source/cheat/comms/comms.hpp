#pragma once
#include <Windows.h>
#include <TlHelp32.h>
#include <vector>
#include <string>
#include <memory>
extern "C" intptr_t
Luck_ReadVirtualMemory
(
	HANDLE ProcessHandle,
	PVOID BaseAddress,
	PVOID Buffer,
	ULONG NumberOfBytesToRead,
	PULONG NumberOfBytesRead
);

extern "C" intptr_t
Luck_WriteVirtualMemory
(
	HANDLE ProcessHandle,
	PVOID BaseAddress,
	PVOID Buffer,
	ULONG NumberOfBytesToWrite,
	PULONG NumberOfBytesWritten
);

class canada_t final  // class to call ur functions (read,write) example: canada.read<uint32_t>(addr);
{
public:
	canada_t() = default;
	~canada_t() = default;
	std::uint64_t find_module_address(const std::string& module_name);
	std::uint32_t find_process_id(const std::string& module_name);
	void attach_to_process(const std::string& process_name);
	std::string read_string(std::uint64_t address);
	template <typename T>
	T read(std::uint64_t address);
	template <typename T>
	void write(std::uint64_t address, T value);

	// getting process stuff.
	std::uint32_t get_process_id();
	std::uint64_t get_module_address();
	HANDLE get_process_handle();
private:
	HANDLE process_handle;
	std::uint32_t process_id;
	std::uint64_t module_address;

};

template <typename T>
T canada_t::read(std::uint64_t address)
{
	T buffer{};
	Luck_ReadVirtualMemory(process_handle, reinterpret_cast<void*>(address), &buffer, sizeof(T), nullptr);
	return buffer;
}
template <typename T>
void canada_t::write(std::uint64_t address, T value)
{
	ULONG bytes_written{};
	Luck_WriteVirtualMemory(this->process_handle, reinterpret_cast<PVOID>(address), &value, sizeof(T), &bytes_written);
}

inline std::unique_ptr<canada_t> canada = std::make_unique<canada_t>(); // global canada object

