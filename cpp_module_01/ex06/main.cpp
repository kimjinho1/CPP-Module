#include "Harl.hpp"

int main(int ac, char **av) {
    Harl    h;

    if (ac != 2)
    {
        std::cout << "Error: Argument number error" << std::endl;
        return (0);
    }
    h.complain(std::string(av[1]));
    return (0);
}