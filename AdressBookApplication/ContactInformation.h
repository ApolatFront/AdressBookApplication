#pragma once
#include <string>

class ContactInformation
{
public:
	std::string email;
	std::string name;
	std::string phone;


	ContactInformation(std::string emailInf, std::string nameInf, std::string phoneInf);
	void displayContact();
	
};

