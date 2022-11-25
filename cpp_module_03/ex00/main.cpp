#include "ClapTrap.hpp"

int main() {
    ClapTrap    jinho1("jinho1");

    for (int i = 0; i < 9; i++)
        jinho1.attack("enemy");
    std::cout << jinho1 << std::endl;
    jinho1.takeDamage(8);
    jinho1.beRepaired(3);
    std::cout << jinho1 << std::endl;
    jinho1.attack("enemy");
    jinho1.beRepaired(3);
    std::cout << jinho1 << std::endl;

    ClapTrap    jinho2("jinho2");
    jinho2.takeDamage(12);
    std::cout << jinho2 << std::endl;
    jinho2.attack("enemy");
    jinho2.beRepaired(3);
    std::cout << std::endl;
    return (0);
}