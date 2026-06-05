//TODO: 
// 1. What am I making? 
// I'm making a simple guest list console app using vectors that contain infomation about the guests such as their name, age, how many people they are coming with, 
// and if they are coming or not. The app will also have a menu that allows the user to add, remove, and view the guest list.
// 2. What am I learning?
// I'm learning how to use vectors in C++ and how to create a simple console app that allows the user to interact with it. I'm also learning how to use functions to organize my code and make it more readable.
// 3. Let's get started!
// 4. First, I will make a class called Guest that will be the based for the guest list.

#include "GuestList.h"
#include <chrono>
#include <thread>
#include <limits>
int main()
{
	GuestList myList;
	bool running = true;
	std::string choose;
	int option;

	while (running)
	{
		std::cout << " Menu\n";
		std::cout << " Pick from the options below\n";
		std::cout << " Choose your actions: \n 1. Add Guest\n 2. See Guest List\n 3. Remove Guest \n 4. Quit\n";
		std::cout << "Options: ";

		std::cin >> choose;
		option = std::stoi(choose);
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		switch (option)
		{
		case 1:
		{
			Guest guest;
			myList.addGuest(guest);
			break;
		}

		case 2:
		{
			myList.displayGuests();
			break;
		}

		case 3:
		{
			myList.removeGuest();
			break;
		}

		case 4:
			running = false;
			break;

		default:
			std::cout << "Invalid option.\n";
			break;
		}
	}
}
