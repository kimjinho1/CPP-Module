#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <sstream>

class Contact
{
private:
	int			id;
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;

public:
	Contact();
	int		getId(void);
	void	setContact(int i);
	void	displayFormat(std::string str);
	void	displayContact(void);
	void	displayAllContact(void);
};

#endif
