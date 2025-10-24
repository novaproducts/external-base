#include <iostream>
#include "../source/cheat/comms/comms.hpp"
#include "cheat/features/cache/cache.hpp"
#include "main.h"
int main() {

	canada_t canada;
	canada.attach_to_process("RobloxPlayerBeta.exe");
	std::uint64_t client_base = canada.find_module_address("RobloxPlayerBeta.exe");
	std::cout << "Roblox Address: 0x" << std::hex << client_base << std::dec << std::endl;


	auto module = canada.get_module_address();
	auto fake_datamodel = canada.read<std::uint64_t>(module + 0x73A7088);
	datamodel = canada.read<std::uint64_t>(fake_datamodel + 0x1c0);
	cached_player = rbx::instance_t(datamodel.find_first_child("Players")).get_children();
	workspace = datamodel.find_first_child("Workspace");
	std::cout << "workspace addy2: 0x" << std::hex << workspace.address << std::dec << std::endl;
	std::cout << "datamodel addy: 0x" << std::hex << datamodel.address << std::dec << std::endl;

	cheat::feature::cache::initialize();
	while (true) {
		for (const auto& player : player_cache) {
			std::cout << "Player Name: " << player.name << std::endl;
			std::cout << "Player Address: 0x" << std::hex << player.address << std::dec << std::endl;
			std::cout << "Health: " << player.health << std::endl;
			std::cout << "------------------------" << std::endl;
		}
		std::this_thread::sleep_for(std::chrono::seconds(5));
	}
	return 0;
}