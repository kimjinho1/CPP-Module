#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    this->name = "";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
};

ScavTrap::ScavTrap(std::string name) {
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
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
        this->name = other.getName();
        this->hitPoints = other.getHitPoints();
        this->energyPoints = other.getEnergyPoints();
        this->attackDamage = other.getAttackDamage();
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor called" << std::endl;
};

void    ScavTrap::attack(const std::string &target) {
    std::cout << "ScavTrap: Can i hit you??" << std::endl;
    if (this->hitPoints == 0)
    {
        std::cout << this->name << " died... can't attack" << std::endl;
        return ;
    }
    if (this->energyPoints == 0)
    {
        std::cout << this->name << "'s energyPoints is 0... can't attack" << std::endl;
        return ;
    }
    this->energyPoints--;
    std::cout << this->name << " attacks " \
        << target << ", causing " << this->attackDamage \
        << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate(void) {
    if (this->hitPoints == 0)
    {
        std::cout << this->name << " died... can't guardGate" << std::endl;
        return ;
    }
    if (this->energyPoints == 0)
    {
        std::cout << this->name << "'s energyPoints is 0... can't guardGate" << std::endl;
        return ;
    }
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
    this->energyPoints--;
}

std::ostream &operator<<(std::ostream &out, const ScavTrap &scavTrap) {
	out << "Name: " << scavTrap.getName() << " HP: " << scavTrap.getHitPoints() \
		<< " EP: " << scavTrap.getEnergyPoints() << " Attack Damage: " << scavTrap.getAttackDamage() << std::endl;
    return out;
}

