#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    name = "";
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
};

ScavTrap::ScavTrap(std::string name) {
    this->name = name;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
};

ScavTrap::ScavTrap(ScavTrap const &other) {
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        name = other.getName();
        hitPoints = other.getHitPoints();
        energyPoints = other.getEnergyPoints();
        attackDamage = other.getAttackDamage();
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor called" << std::endl;
};

void    ScavTrap::attack(const std::string &target) {
    std::cout << "ScavTrap: Can i hit you??" << std::endl;
    if (hitPoints == 0)
    {
        std::cout << name << " died... can't attack" << std::endl;
        return ;
    }
    if (energyPoints == 0)
    {
        std::cout << name << "'s energyPoints is 0... can't attack" << std::endl;
        return ;
    }
    energyPoints--;
    std::cout << name << " attacks " \
        << target << ", causing " << attackDamage \
        << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate(void) {
    if (hitPoints == 0)
    {
        std::cout << name << " died... can't guardGate" << std::endl;
        return ;
    }
    if (energyPoints == 0)
    {
        std::cout << name << "'s energyPoints is 0... can't guardGate" << std::endl;
        return ;
    }
	std::cout << name << " is now in Gate keeper mode" << std::endl;
    energyPoints--;
}

std::ostream &operator<<(std::ostream &out, const ScavTrap &scavTrap) {
	out << "ScavTrap " << "Name: " << scavTrap.getName() << " HP: " << scavTrap.getHitPoints() \
		<< " EP: " << scavTrap.getEnergyPoints() << " Attack Damage: " << scavTrap.getAttackDamage() << std::endl;
    return out;
}

