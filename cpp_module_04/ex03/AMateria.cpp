#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(const std::string &type) : type(type) {
	//std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other) : type(other.type) {
	//std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria &other) {
	//std::cout << "AMateria copy assignment constructor called" << std::endl;
	if (this != &other)
		type = other.type;
	return *this;
}

AMateria::~AMateria() {
	//std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::getType() const {
	return type;
}

void	AMateria::use(ICharacter& target) {
	std::cout << target.getName() << std::endl;
}
