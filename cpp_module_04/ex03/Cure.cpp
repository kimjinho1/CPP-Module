#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	//std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other) {
	//std::cout << "Cure copy constructor called" << std::endl;
}

Cure& Cure::operator=(const Cure &other) {
	//std::cout << "Cure copy assignment operator called" << std::endl;
	if (this != &other)
		type = other.type;
	return *this;
}

Cure::~Cure() {
	//std::cout << "Cure destructor called" << std::endl;
}

AMateria	*Cure::clone() const {
	return new Cure();
}

void	Cure::use(ICharacter &target) {
	std::cout << "* heals "<< target.getName() << "’s wounds *" << std::endl;
}