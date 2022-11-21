#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <iomanip>

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
