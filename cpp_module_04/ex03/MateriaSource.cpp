#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	// std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	// std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
	// std::cout << "MateriaSource copy assignment operator called" << std::endl;
	if (this != &other)
	{
		for(int i = 0; i < 4; ++i)
			delete inventory[i];
		for(int i = 0; i < 4; ++i)
			inventory[i] = other.inventory[i];
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	// std::cout << "MateriaSource destructor called" << std::endl;
	for(int i = 0; i < 4; ++i)
		delete inventory[i];
}

void MateriaSource::learnMateria(AMateria *materia) {
	if (materia) {
		for(int i = 0; i < 4; i++) {
			if (inventory[i] == NULL) {
				inventory[i] = materia->clone();
				return;
			}
		}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for(int i = 0; i < 4; ++i) {
		if (inventory[i] !=  NULL)
			if (inventory[i]->getType() == type)
				return inventory[i]->clone();
	}
	return NULL;
}