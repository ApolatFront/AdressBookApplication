#include "ContactInformation.h"
#include "AddressBook.h"
#include <iostream>
int main()
{
	int userInput;
	std::string name, email, phone;
	bool isRunning = true;

	AddressBook adressBook;
	
	std::cout << "Welcome to Address Book Application" << std::endl;

	std::cout << "1. Add a contact" << std::endl;
	std::cout << "2. Delete a contact" << std::endl;
	std::cout << "3. Search for a contact" << std::endl;
	std::cout << "4. Display contacts" << std::endl;
	std::cout << "5. Exit" << std::endl;
	std::cin >> userInput;

	while (isRunning) {
	
		if (userInput == 1) {
			std::cout << "Name of the contact: ";
			std::cin >> name;

			std::cout << "Email of the contact: ";
			std::cin >> email;

			std::cout << "Phone number of the contact: ";
			std::cin >> phone;

			adressBook.AddContact(ContactInformation(email, name, phone));

			std::cout << "1. Add a contact" << std::endl;
			std::cout << "2. Delete a contact" << std::endl;
			std::cout << "3. Search for a contact" << std::endl;
			std::cout << "4. Display contacts" << std::endl;
			std::cout << "5. Exit" << std::endl;
			std::cin >> userInput;
		}
		else if (userInput == 2) {
			std::cout << "Input the name of the contact you want do delete: ";
			std::cin >> name;

			adressBook.deleteContact(name);

			std::cout << "1. Add a contact" << std::endl;
			std::cout << "2. Delete a contact" << std::endl;
			std::cout << "3. Search for a contact" << std::endl;
			std::cout << "4. Display contacts" << std::endl;
			std::cout << "5. Exit" << std::endl;
			std::cin >> userInput;
		}
		else if (userInput == 3) {
			std::cout << "Input the name of the contact you want to search: ";
			std::cin >> name;

			adressBook.searchContact(name);

			std::cout << "1. Add a contact" << std::endl;
			std::cout << "2. Delete a contact" << std::endl;
			std::cout << "3. Search for a contact" << std::endl;
			std::cout << "4. Display contacts" << std::endl;
			std::cout << "5. Exit" << std::endl;
			std::cin >> userInput;
		}
		else if (userInput == 4) {
			
			adressBook.displayContacts();

			std::cout << "1. Add a contact" << std::endl;
			std::cout << "2. Delete a contact" << std::endl;
			std::cout << "3. Search for a contact" << std::endl;
			std::cout << "4. Display contacts" << std::endl;
			std::cout << "5. Exit" << std::endl;
			std::cin >> userInput;
		}
		else if (userInput == 5) {
			isRunning = false;
		}

		


	}
	


	
}

