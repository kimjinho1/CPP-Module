#include "Contact.hpp"

Contact::Contact() {
	this->id = 0;
}

int	Contact::getId(void) {
	return (this->id);
}

void	Contact::setContact(int i) {
	this->id = i;
	std::cout << "first name: ";
	std::cin >> this->firstName;
	std::cout << "last name: ";
	std::cin >> this->lastName;
	std::cout << "nickname: ";
	std::cin >> this->nickName;
	std::cout << "phone number: ";
	std::cin >> this->phoneNumber;
	std::cout << "darkest secret: ";
	std::cin >> this->darkestSecret;
}

void	Contact::displayFormat(std::string str) {
	if (str.length() > 10)
		std::cout << std::setw(9) << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << str;
}

void	Contact::displayContact(void) {
	std::string	strId;

	if (this->id == 0)
		return ;
	strId = std::to_string(this->id);
	this->displayFormat(strId);
	std::cout << "|";
	this->displayFormat(this->firstName);
	std::cout << "|";
	this->displayFormat(this->lastName);
	std::cout << "|";
	this->displayFormat(this->nickName);
	std::cout << std::endl;
}

void	Contact::displayAllContact(void) {
	std::cout << "first name: " << this->firstName << std::endl;
	std::cout << "last name: " << this->lastName << std::endl;
	std::cout << "nickname: " << this->nickName << std::endl;
	std::cout << "phone number: " << this->phoneNumber << std::endl;
	std::cout << "darkset secret: " << this->darkestSecret << std::endl;
}
