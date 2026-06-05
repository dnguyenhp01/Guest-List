#pragma once
#include<iostream>
#include <vector>
#include "Guest.h"

class GuestList
{
public:

	void addGuest(Guest& guest);
	void removeGuest();
	void displayGuests();

	int totalGuests_;

private:
	std::vector<Guest> guestList_;
};

