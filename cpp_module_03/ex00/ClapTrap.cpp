#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name(""), hitPoints(10), \
            energyPoints(10), attackDamage(0) {
    std::cout << "constructor called" << std::endl;
};

ClapTrap::ClapTrap(std::string name) : name(name), \
            hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "constructor called" << std::endl;
};

ClapTrap::ClapTrap(ClapTrap const &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        name = other.getName();
        hitPoints = other.getHitPoints();
        energyPoints = other.getEnergyPoints();
        attackDamage = other.getAttackDamage();
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
};

std::string ClapTrap::getName(void) const {
    return name;
}

int ClapTrap::getHitPoints(void) const {
    return hitPoints;
}

int ClapTrap::getEnergyPoints(void) const {
    return energyPoints;
}

int ClapTrap::getAttackDamage(void) const {
    return attackDamage;
}

void    ClapTrap::attack(const std::string &target) {
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

void    ClapTrap::takeDamage(unsigned int amount) {
    std::cout << name << " takeDamage " << amount << ", HP: " << getHitPoints() << " -> ";
    hitPoints -= amount;
    if (hitPoints < 0)
        hitPoints = 0;
    std::cout << hitPoints << std::endl;
    if (hitPoints == 0)
        std::cout << name << " died..." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (hitPoints == 0)
    {
        std::cout << name << " died... can't beRepaired" << std::endl;
        return ;
    }
    if (energyPoints == 0)
    {
        std::cout << name << "'s energyPoints is 0... can't beRepaired" << std::endl;
        return ;
    }
    energyPoints--;
    std::cout << name << " beRepaired " << amount << ", HP: " << getHitPoints() << " -> ";
    hitPoints += amount;
    std::cout << hitPoints << std::endl;
}

std::ostream &operator<<(std::ostream &out, const ClapTrap &clapTrap) {
	out << "Name: " << clapTrap.getName() << " HP: " << clapTrap.getHitPoints() \
		<< " EP: " << clapTrap.getEnergyPoints() << " Attack Damage: " << clapTrap.getAttackDamage() << std::endl;
    return out;
}
