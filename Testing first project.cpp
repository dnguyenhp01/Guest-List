//TODO: 
// 1. What am I making? 
// I'm making a simple guest list console app using vectors that contain infomation about the guests such as their name, age, how many people they are coming with, 
// and if they are coming or not. The app will also have a menu that allows the user to add, remove, and view the guest list.
// 2. What am I learning?
// I'm learning how to use vectors in C++ and how to create a simple console app that allows the user to interact with it. I'm also learning how to use functions to organize my code and make it more readable.
// 3. Let's get started!
// 4. First, I will make a class called Guest that will be the based for the guest list.

#include "GuestList.h"
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
		std::cin >> choose;
		option = std::stoi(choose);

		if (option == 1)
		{
			Guest guest;
			myList.addGuest(guest);
		}
		else if (option == 2)
		{
			myList.displayGuests();
		}
		else if (option == 3)
		{
			myList.removeGuest();
		}
		else if (option == 4)
		{
			running = false;
		}
	}
}


