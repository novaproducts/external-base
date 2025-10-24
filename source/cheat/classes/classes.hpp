#pragma once
#include <cstdint>
#include <string>
#include <vector>
#include <Windows.h>
#include "../comms/comms.hpp"
#include "../../utils/offsets/offsets.hpp"
#include "../../utils/math/math.h"

namespace rbx {




	class instance_t final
	{
	public:
		std::uint64_t address;
		instance_t() : address(0) {}
		instance_t(std::uint64_t address) : address(address) {}
		std::string get_name() const;
		rbx::instance_t get_model_instance() const;
		std::string get_class_name() const;
		std::uint64_t get_team();
		std::vector<rbx::instance_t> get_children();
		std::uint64_t find_first_child(const std::string& child_name);
		std::uint64_t find_first_child_by_class(const std::string& class_name);
		std::uint64_t get_parent();
		std::uint64_t get_rigtype();
		// part specific
		math::vector3_t get_size();
		math::vector3_t get_coordinate_frame();
		rbx::instance_t get_primitive() const;
		math::vector3_t get_position();
		math::matrix3_t get_rotation();


	private:

	};
}