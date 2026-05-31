#include "GuestList.h"
#include<iostream>

void GuestList::addGuest(Guest& guest)
{
	std::string guestName;
	std::cout << " Adding a guest to the list......\n Please enter the name of the guest: ";
	std::cin >> guestName;
	std::cout << "\n";
	guest.setName(guestName);

	std::string confirmation;
	std::cout << "Is the guest coming? (Y/N): ";
	std::cin >> confirmation;

	if (confirmation == "Y")
	{
		guest.isComing_ = true;
	}
	else
	{
		guest.isComing_ = false;
	}
	guestList_.push_back(guest);
}

void GuestList::removeGuest()
{
	std::string guestName;
	std::cout << " Please enter the guest's name you want to remove on the list: ";
	std::cin >> guestName;
	std::cout << "\n";

	for (int i = 0; i < guestList_.size(); i++)
	{
		if (guestList_[i].getName() == guestName)
			guestList_.erase(guestList_.begin() + i);
	}
}

void GuestList::displayGuests()
{
	std::cout << " Guest List: " << std::endl;
	std::cout << "------------------" << std::endl;
	std::cout << "Name\t\tComing" << std::endl;
	std::cout << "------------------" << std::endl;
	for (int i = 0; i < guestList_.size(); i++)
	{
		if (guestList_[i].isComing_)
		{
			std::cout << guestList_[i].getName() << "\t\tYes" << std::endl;
		}
		else
		{
			std::cout << guestList_[i].getName() << "\t\tNo" << std::endl;
		}
	}
}