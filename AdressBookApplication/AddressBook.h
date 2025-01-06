#pragma once
#include <string>
#include <vector>
#include "ContactInformation.h"
class AddressBook
{
private:
	std::vector<ContactInformation> contacts;

public:
	void AddContact(const ContactInformation& contact);
	void displayContacts();
	void searchContact(std::string name);
	void deleteContact(std::string name);
};