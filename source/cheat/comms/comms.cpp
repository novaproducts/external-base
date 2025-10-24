#include "comms.hpp"

std::uint32_t canada_t::find_process_id(const std::string& process_name)
{
	std::uint32_t process_id = 0;
	HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);
	if (snapshot != INVALID_HANDLE_VALUE) {
		PROCESSENTRY32 process_entry;
		process_entry.dwSize = sizeof(PROCESSENTRY32);
		if (Process32First(snapshot, &process_entry)) {
			do {
				if (process_name == process_entry.szExeFile) {
					process_id = process_entry.th32ProcessID;
					break;
				}
			} while (Process32Next(snapshot, &process_entry));
		}
		CloseHandle(snapshot);
	}
	CloseHandle(snapshot);
	return process_id;
}

std::uint64_t canada_t::find_module_address(const std::string& module_name)
{
	std::uint64_t module_address = 0;
	HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, this->process_id);
	if (snapshot != INVALID_HANDLE_VALUE) {
		MODULEENTRY32 module_entry;
		module_entry.dwSize = sizeof(MODULEENTRY32);
		if (Module32First(snapshot, &module_entry)) {
			do {
				if (module_name == module_entry.szModule) {
					module_address = reinterpret_cast<std::uint64_t>(module_entry.modBaseAddr);
					break;
				}
			} while (Module32Next(snapshot, &module_entry));
		}
		CloseHandle(snapshot);
	}
	CloseHandle(snapshot);
	return module_address;
}

void canada_t::attach_to_process(const std::string& process_name)
{
	this->process_id = this->find_process_id(process_name);
	this->process_handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, this->process_id);
	this->module_address = this->find_module_address(process_name);
}

std::string canada_t::read_string(std::uint64_t address)
{
	std::int32_t string_length = this->read<std::int32_t>(address + 0x10);
	std::uint64_t string_addres = (string_length >= 16) ? this->read<std::uint64_t>(address) : address;
	if (string_length <= 0 || string_length > 255) { // could be 1048 aswell.
		return std::string();
	}

	std::vector<char> buffer(string_length + 1, 0);
	Luck_ReadVirtualMemory(this->process_handle, reinterpret_cast<PVOID>(string_addres), buffer.data(), string_length, nullptr);
	return std::string(buffer.data());
}

std::uint64_t canada_t::get_module_address()
{
	return this->module_address;
}
std::uint32_t canada_t::get_process_id()
{
	return this->process_id;
}
HANDLE canada_t::get_process_handle()
{
	return this->process_handle;
}



