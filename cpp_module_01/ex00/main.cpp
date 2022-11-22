#include "Zombie.hpp"

int main(void) {
    Zombie  unknown;
    Zombie  jinho("jinho");
    Zombie  *newJinho = newZombie("newJinho");

    randomChump(std::string("randomJinho"));
    jinho.announce();
    newJinho->announce();
    delete newJinho;
    return (0);
}