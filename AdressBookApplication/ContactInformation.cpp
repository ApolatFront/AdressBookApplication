#include "ContactInformation.h"
#include <iostream>
ContactInformation::ContactInformation(std::string emailInf, std::string nameInf, std::string phoneInf) {
	name = nameInf;
	email = emailInf;
	phone = phoneInf;
}

void ContactInformation::displayContact() {
	std::cout << "Name: " << name << "\nEmail: " << email << "\nPhone: " << phone << std::endl << std::endl;
}
