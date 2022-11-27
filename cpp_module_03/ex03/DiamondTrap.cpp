#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap() {
    ClapTrap::name = name + "_clap_name";
    ClapTrap::attackDamage = 30;
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name) {
    this->name = name;
    ClapTrap::name = name + "_clap_name";
    ClapTrap::attackDamage = 30;
    std::cout << "DiamondTrap constructor called" << std::endl;
};

DiamondTrap::DiamondTrap(DiamondTrap const &other) {
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    *this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
    ClapTrap::operator=(other);
    std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap Destructor called" << std::endl;
};

void    DiamondTrap::printStat(void) {
    std::cout << name << "'s hitPoints: " << hitPoints << std::endl;
    std::cout << name << "'s energyPoints: " << energyPoints << std::endl;
    std::cout << name << "'s attackDamage: " << attackDamage << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI(void) {
    std::cout << "DiamondTrap's name: " << name << std::endl;
    std::cout << "ClapTrap's name: " << ClapTrap::name << std::endl;
}

std::ostream &operator<<(std::ostream &out, const DiamondTrap &diamondTrap) {
	out << "DiamondTrap's name: " << diamondTrap.getName() << " HP: " << diamondTrap.getHitPoints() \
		<< " EP: " << diamondTrap.getEnergyPoints() << " Attack Damage: " << diamondTrap.getAttackDamage() << std::endl;
    return out;
}