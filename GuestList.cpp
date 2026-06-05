#include "GuestList.h"

void GuestList::addGuest(Guest& guest)
{
	std::string guestName;
	std::cout << " Adding a guest to the list......\n Please enter the name of the guest: ";
	std::cin >> guestName;
	std::cout << "\n";
	guest.setName(guestName);

	std::string coming;
	std::cout << "Is the Guest coming? (Y/N): ";
	std::cin >> coming;

	if (coming == "Y" || coming == "y")
	{
		guest.isComing_ = true;
		std::string extraConfirm;
		std::cout << "\nIs the Guest bringing extras? (Y/N): ";
		std::cin >> extraConfirm;

		if (extraConfirm == "Y" || extraConfirm == "y")
		{
			guest.haveExtra_ = true;
			std::string count;
			std::cout << "\nHow many extras? ";
			std::cin >> count;
			guest.extraCounts_ = std::stoi(count);
		}
		else if (extraConfirm == "N" || extraConfirm == "n")
		{
			guest.haveExtra_ = false;
		}
		guestList_.push_back(guest);
		totalGuests_ += 1 + guest.extraCounts_;
		std::cout << "Guest added successfully\n";
	}
	else if (coming == "N" || coming == "n")
	{
		guestList_.push_back(guest);
		guest.isComing_ = false;
	}
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
		{
			totalGuests_ -= (1 + guestList_[i].extraCounts_);
			guestList_.erase(guestList_.begin() + i);
		}
	}
	std::cout << "\n" << guestName << " is deleted from the list succesfully\n";
}

void GuestList::displayGuests()
{
	std::cout << " Guest List: " << std::endl;
	std::cout << "------------------------------------" << std::endl;
	std::cout << "Name\t\tComing\t\tExtra" << std::endl;
	std::cout << "------------------------------------" << std::endl;
	for (int i = 0; i < guestList_.size(); i++)
	{
		if (guestList_[i].isComing_)
		{
			std::cout << guestList_[i].getName() << "\t\tYes\t\t" << guestList_[i].getExtra() << std::endl;
		}
		else
		{
			std::cout << guestList_[i].getName() << "\t\tNo\t\t" << guestList_[i].getExtra() << std::endl;
		}
	}
	std::cout << "____Total Guests____: " << totalGuests_ << std::endl;
}