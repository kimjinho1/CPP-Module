#include "DiamondTrap.hpp"

int main() {
    DiamondTrap    DiaJinho("DiaJinho");

    std::cout << std::endl;
    DiaJinho.printStat();

    std::cout << std::endl;
    DiaJinho.attack("enemy");
    DiaJinho.takeDamage(80);
    DiaJinho.beRepaired(30);
    std::cout << DiaJinho << std::endl;

    DiaJinho.guardGate();
    DiaJinho.highFivesGuys();
    DiaJinho.whoAmI();
    std::cout << std::endl;

    DiamondTrap    DiaJinho2("DiaJinho2");
    DiaJinho2.takeDamage(130);
    std::cout << DiaJinho2 << std::endl;
    DiaJinho2.attack("enemy");
    DiaJinho2.beRepaired(40);
    std::cout << std::endl;
    return (0);
}