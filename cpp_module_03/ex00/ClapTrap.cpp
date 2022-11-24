#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name) {
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
};

ClapTrap::ClapTrap(ClapTrap const &other) {
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    if (this != &other)
    {
        this->name = other.getName();
        this->hitPoints = other.getHitPoints();
        this->energyPoints = other.getHitPoints();
        this->attackDamage = other.getAttackDamage();
    }
    return *this;
}

ClapTrap::~ClapTrap() {};

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
    std::cout << this->name << " attack " << target << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {
    std::cout << this->name << " takeDamage " << amount << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount) {
    std::cout << this->name << " beRepaired " << amount << std::endl;
}

std::ostream &operator<<(std::ostream &out, const ClapTrap &clapTrap) {
    out << clapTrap.getName();
    return out;
}
