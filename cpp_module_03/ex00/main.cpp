#include "ClapTrap.hpp"

int main() {
    ClapTrap    jinho("jinho");

    jinho.attack("enemy");
    jinho.takeDamage(10);
    jinho.beRepaired(10);
    return (0);
}