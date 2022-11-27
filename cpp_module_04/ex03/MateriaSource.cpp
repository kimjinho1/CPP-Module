#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	// std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	*this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
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