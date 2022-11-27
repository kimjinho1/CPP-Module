#include "FragTrap.hpp"

FragTrap::FragTrap() {
    name = "";
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) {
    this->name = name;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
};

FragTrap::FragTrap(FragTrap const &other) {
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        name = other.getName();
        hitPoints = other.getHitPoints();
        energyPoints = other.getEnergyPoints();
        attackDamage = other.getAttackDamage();
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap Destructor called" << std::endl;
};

void    FragTrap::attack(const std::string &target) {
    std::cout << "FragTrap: Can i hit you??" << std::endl;
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

void    FragTrap::highFivesGuys(void) {
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
	std::cout << name << " high fives!!" << std::endl;
    energyPoints--;
}

std::ostream &operator<<(std::ostream &out, const FragTrap &fragTrap) {
	out << "CrapTrap " << "Name: " << fragTrap.getName() << " HP: " << fragTrap.getHitPoints() \
		<< " EP: " << fragTrap.getEnergyPoints() << " Attack Damage: " << fragTrap.getAttackDamage() << std::endl;
    return out;
}

