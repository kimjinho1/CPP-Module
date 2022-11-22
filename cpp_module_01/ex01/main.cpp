#include "Zombie.hpp"

int main(void) {
    Zombie  *horde = zombieHorde(8, "jinho");

    for (int i = 0; i < 8; i++)
        horde[i].announce();
    delete[] horde;
    return (0);
}