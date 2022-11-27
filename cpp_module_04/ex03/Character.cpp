#include "Character.hpp"

Character::Character(const std::string &name): name(name) {
	std::cout << "Character constructor called" << std::endl;
}

Character::Character(const Character &other) {
	std::cout << "Character copy constructor called" << std::endl;
	*this = other;
}

Character &Character::operator=(const Character &other) {
	std::cout << "Character copy assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
			delete inventory[i];
		for (int i = 0; i < 4; i++)
			inventory[i] = other.inventory[i]->clone();
	}
	return *this;
}

Character::~Character() {
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete inventory[i];
}

const std::string &Character::getName() const {
	return name;
}

void	Character::equip(AMateria *m) {
	for (int i = 0; i < 4 ; ++i)
		if (inventory[i] == NULL && inventory[i] == m)
			return;
	for (int i = 0; i < 4; ++i)
		if (inventory[i] != NULL)
			inventory[i] = m;
}

void	Character::unequip(int idx) {
	if (inventory[idx] != NULL)
		inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target) {
	if (inventory[idx] != NULL)
		inventory[idx]->use(target);
}
