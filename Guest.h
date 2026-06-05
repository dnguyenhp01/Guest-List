#pragma once
#include <string>

class Guest
{
public:

	Guest()
	{
		name_ = "";
		isComing_ = false;
		haveExtra_ = false;
		extraCounts_ = 0;
	}

	std::string getName() const;
	std::string setName(std::string name);
	int getExtra() const;

	bool isComing_;
	bool haveExtra_;
	int extraCounts_;
private:
	std::string name_;
};

