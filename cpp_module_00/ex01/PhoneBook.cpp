#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
    this->idx = 0;
}

void	PhoneBook::ADD(void) {
	if (this->idx == 8)
		this->idx = 0; 
	this->contacts[idx].setContact(this->idx + 1);
	this->idx++;
}

void	PhoneBook::SEARCH(void) {
	std::string	line;
	int			ssi;

	if (this->idx == 0)
	{
		std::cout << "Error: Can't find any contact" << std::endl;
		return ;
	}
	for (int i = 0; i < 8; i++)
		this->contacts[i].displayContact();
	std::cout << "idx: ";
	getline(std::cin, line);
	if (std::cin.eof() == 1)
		return ;
	for (size_t i = 0; i < line.length(); i++)
	{
		if (std::isdigit(line.at(i)) == 0)
		{
			std::cout << "Error: Input is not a number" << std::endl;
			return ;
		}
	}
	std::stringstream ss(line);
	ss >> ssi;
	if (ss.fail())
		std::cout << "Error: Input is not a number" << std::endl;
	else if (ssi > 8 || ssi < 1)
		std::cout << "Error: Out of range" << std::endl;
	else if (this->contacts[ssi - 1].getId() == 0)
		std::cout << "Error: It is an empty contatct" << std::endl;
	else
		this->contacts[ssi - 1].displayAllContact();
}

void	PhoneBook::EXIT(void) {
	exit(0);
}

int	main(void) {
	PhoneBook 	pb;
	std::string	line;

	while (42) {
		getline(std::cin, line);
		if (std::cin.eof() == 1 || line.compare("EXIT") == 0)
			pb.EXIT();
		else if (line.compare("ADD") == 0)
		{
			pb.ADD();
			std::cin.ignore();
		}
		else if (line.compare("SEARCH") == 0)
			pb.SEARCH();
		else
			std::cout << "Usage: Only ADD, SEARCH and EXIT can be used" << std::endl;
	}
}
