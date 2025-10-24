#pragma once
#include <vector>
#include "cheat/features/cache/cache.hpp"

inline std::vector<cheat::feature::cache::parts::cached_entity> player_cache;
inline rbx::instance_t workspace;
inline rbx::instance_t datamodel;

inline std::vector<rbx::instance_t> cached_player;
inline std::unique_ptr<rbx::instance_t> g_datamodel;
inline std::unique_ptr<rbx::instance_t> g_workspace;
inline std::unique_ptr<rbx::instance_t> g_visualengine;
inline std::unique_ptr<rbx::instance_t> g_players;