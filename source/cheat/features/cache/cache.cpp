#include "cache.hpp"
#include "../../../main.h"
canada_t idkwhyiputitlikethisucanjustmakeauniquiepointertojustlinkitotoeverything;
// << cache might stop. >> //
void cheat::feature::cache::initialize() {
    while (true) {
        std::vector<cheat::feature::cache::parts::cached_entity> temp;
        temp.reserve(32);

        for (rbx::instance_t player : cached_player) {
            cheat::feature::cache::parts::cached_entity cached_player;
            cached_player.player = player;
            cached_player.character = player.get_model_instance();
            cached_player.children = cached_player.character.get_children();
            cached_player.team = player.get_team();
            cached_player.name = player.get_name();

            std::uint64_t humanoid = cached_player.character.find_first_child("Humanoid");
            std::uint8_t rig_type = idkwhyiputitlikethisucanjustmakeauniquiepointertojustlinkitotoeverything.read<std::uint8_t>(humanoid + Offsets::Humanoid::RigType);

            for (rbx::instance_t part : cached_player.character.get_children()) {
                std::string part_name = part.get_name();

                if (rig_type == 0) {
                    cached_player.r6.r6parts[part_name] = part;
                }

                if (rig_type == 1) {
                    cached_player.r15.r15parts[part_name] = part;
                }
            }

            temp.push_back(cached_player);
        }

        player_cache = temp;

        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}
