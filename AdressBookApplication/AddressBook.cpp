#include "AddressBook.h"
#include <iostream>

void AddressBook::AddContact(const ContactInformation& contact) {
	contacts.push_back(contact);
	std::cout << "Contact was added!" << std::endl;
}

void AddressBook::displayContacts() {
	
	
	for (ContactInformation c : contacts) {
		c.displayContact();
	}
	
	if (contacts.empty())  {
		std::cout << "No contacts found!" << std::endl;
	}
}

void AddressBook::searchContact(std::string name) {
	for (ContactInformation c : contacts) {
		if (c.name == name) {
			std::cout << "Contact found: " << std::endl; 
			c.displayContact();
		}
		else {
			std::cout << "No matching contact found!";
		}
	}
}

void AddressBook::deleteContact(std::string name) {
	bool found = false;

	for (int i = 0; i < contacts.size(); i++)
	{
		if (contacts[i].name == name) {
			contacts.erase(contacts.begin() + i);
			std::cout << "Contact deleted!" << std::endl;
			found = true;
			break;
		}
		
	}

	if (!found) {
		std::cout << "Contact not found!" << std::endl;
	}
}