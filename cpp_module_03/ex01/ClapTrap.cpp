#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name(""), hitPoints(10), \
            energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap constructor called" << std::endl;
};

ClapTrap::ClapTrap(std::string name) : name(name), \
            hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap constructor called" << std::endl;
};

ClapTrap::ClapTrap(ClapTrap const &other) {
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->name = other.getName();
        this->hitPoints = other.getHitPoints();
        this->energyPoints = other.getEnergyPoints();
        this->attackDamage = other.getAttackDamage();
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap Destructor called" << std::endl;
};

std::string ClapTrap::getName(void) const {
    return this->name;
}

int ClapTrap::getHitPoints(void) const {
    return this->hitPoints;
}

int ClapTrap::getEnergyPoints(void) const {
    return this->energyPoints;
}

int ClapTrap::getAttackDamage(void) const {
    return this->attackDamage;
}

void    ClapTrap::attack(const std::string &target) {
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

void    ClapTrap::takeDamage(unsigned int amount) {
    std::cout << this->name << " takeDamage " << amount << ", HP: " << this->getHitPoints() << " -> ";
    this->hitPoints -= amount;
    if (this->hitPoints < 0)
        this->hitPoints = 0;
    std::cout << this->hitPoints << std::endl;
    if (this->hitPoints == 0)
        std::cout << this->name << " died..." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (this->hitPoints == 0)
    {
        std::cout << this->name << " died... can't beRepaired" << std::endl;
        return ;
    }
    if (this->energyPoints == 0)
    {
        std::cout << this->name << "'s energyPoints is 0... can't beRepaired" << std::endl;
        return ;
    }
    this->energyPoints--;
    std::cout << this->name << " beRepaired " << amount << ", HP: " << this->getHitPoints() << " -> ";
    this->hitPoints += amount;
    std::cout << this->hitPoints << std::endl;
}

std::ostream &operator<<(std::ostream &out, const ClapTrap &clapTrap) {
	out << "Name: " << clapTrap.getName() << " HP: " << clapTrap.getHitPoints() \
		<< " EP: " << clapTrap.getEnergyPoints() << " Attack Damage: " << clapTrap.getAttackDamage() << std::endl;
    return out;
}
