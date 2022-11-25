#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap    clapJinho("clapJinho");
    ScavTrap    ScavJinho("ScavJinho");

    std::cout << std::endl;
    ScavJinho.attack("enemy");
    ScavJinho.takeDamage(80);
    ScavJinho.beRepaired(30);
    std::cout << ScavJinho << std::endl;

    ScavJinho.guardGate();
    std::cout << std::endl;

    ScavTrap    ScavJinho2("ScavJinho2");
    ScavJinho2.takeDamage(130);
    std::cout << ScavJinho2 << std::endl;
    ScavJinho2.attack("enemy");
    ScavJinho2.beRepaired(40);
    std::cout << std::endl;
    return (0);
}