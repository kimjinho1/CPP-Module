#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "Unknown Zombie: Hi......" << std::endl;
}

Zombie::Zombie(std::string name) {
	this->name = name;

	std::cout << this->name << ": Hi......" << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->name << ": Bye......" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name) {
	this->name = name;
}