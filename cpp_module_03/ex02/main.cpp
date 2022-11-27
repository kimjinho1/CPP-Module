#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main() {
    FragTrap    FragJinho("FragJinho");

    std::cout << std::endl;
    FragJinho.attack("enemy");
    FragJinho.takeDamage(80);
    FragJinho.beRepaired(30);
    std::cout << FragJinho << std::endl;

    FragJinho.highFivesGuys();
    std::cout << std::endl;

    FragTrap    FragJinho2("FragJinho2");
    FragJinho2.takeDamage(130);
    std::cout << FragJinho2 << std::endl;
    FragJinho2.attack("enemy");
    FragJinho2.beRepaired(40);
    std::cout << std::endl;

    FragTrap    FragJinho3("FragJinho3");
    std::cout << std::endl;
    return (0);
}