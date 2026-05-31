#pragma once
#include <string>

class Guest
{
public:

	Guest()
	{
		name_ = "";
		isComing_ = false;
	}

	std::string getName() const;
	std::string setName(std::string name);

	bool isComing_;
private:
	std::string name_;
};

