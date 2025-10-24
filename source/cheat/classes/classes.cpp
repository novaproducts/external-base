#include "classes.hpp"

std::string rbx::instance_t::get_name() const {
	std::uint64_t ptr = canada->read<std::uint64_t>(this->address + Offsets::Instance::Name);
	if (ptr != 0) {
		return canada->read_string(ptr);
	}
	return "unknown";
}

rbx::instance_t rbx::instance_t::get_model_instance() const {

    rbx::instance_t modelInstance = canada->read<rbx::instance_t>(this->address + Offsets::Player::ModelInstance);
    return modelInstance;
}

std::string rbx::instance_t::get_class_name() const
{
	std::uint64_t classAddress = canada->read<std::uint64_t>(this->address + Offsets::Instance::ClassDescriptor);
	std::uint64_t classNameSize = canada->read<std::uint64_t>(classAddress + Offsets::Instance::ClassName);

	return canada->read_string(classNameSize);
}


std::uint64_t rbx::instance_t::get_team() 
{
	return canada->read<uint64_t>(this->address + Offsets::Player::Team);
}

std::vector<rbx::instance_t> rbx::instance_t::get_children()
{

	std::vector<instance_t> children;

	std::uint64_t start = canada->read<std::uint64_t>(this->address + Offsets::Instance::ChildrenStart);
	std::uint64_t end = canada->read<std::uint64_t>(start + Offsets::Instance::ChildrenEnd);
	for (std::uint64_t instance = canada->read<std::uint64_t>(start); instance != end; instance += 0x10) {
		children.emplace_back(instance_t(canada->read<std::uint64_t>(instance)));
	}
	return children;
}

std::uint64_t rbx::instance_t::find_first_child(const std::string& child_name)
{
	std::vector<rbx::instance_t> children = this->get_children();
	for (const auto& child : children) {
		if (child.get_name() == child_name) {
			return child.address;
		}
	}

	return 0;
}

std::uint64_t rbx::instance_t::find_first_child_by_class(const std::string& class_name)
{
	std::vector<rbx::instance_t> children = this->get_children();

	for (auto& object : children)
	{
		if (object.get_class_name() == class_name)
		{
			return object.address;
		}
	}
	return 0;
}

std::uint64_t rbx::instance_t::get_parent()
{
	rbx::instance_t* self = static_cast<rbx::instance_t*>(this);
	rbx::instance_t parent = rbx::instance_t(canada->read<std::uint64_t>(self->address + Offsets::Instance::Parent));
	return parent.address;
}

std::uint64_t rbx::instance_t::get_rigtype() {
	return canada->read<std::uint64_t>(this->address + Offsets::Humanoid::RigType);
}



// part spefific
math::vector3_t rbx::instance_t::get_position()
{
	return canada->read<math::vector3_t>(this->address + Offsets::BasePart::Position);
}

math::matrix3_t rbx::instance_t::get_rotation()
{
	return canada->read<math::matrix3_t>(this->address + Offsets::BasePart::Rotation);
}

math::vector3_t rbx::instance_t::get_size()
{
	return canada->read<math::vector3_t>(this->address + Offsets::BasePart::Size);

}

math::vector3_t rbx::instance_t::get_coordinate_frame()
{
	return canada->read<math::vector3_t>(this->address + Offsets::BasePart::Rotation);

}

rbx::instance_t rbx::instance_t::get_primitive() const
{
	return canada->read<std::uint64_t>(this->address + Offsets::BasePart::Primitive);

}

