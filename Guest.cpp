#include "Guest.h"

std::string Guest::getName() const
{
	return name_;
}

std::string Guest::setName(std::string name)
{
	name_ = name;
	return name;
}
int Guest::getExtra() const
{
	return extraCounts_;
}
