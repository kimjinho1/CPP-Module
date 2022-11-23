#include "Replace.hpp"

int main(int ac, char **av) {
    if (ac != 4)
    {
        std::cout << "Error: Arguments number error" << std::endl;
        return (0);
    }
    Replace replace(av[1], av[2], av[3]);
    try {
        replace.replace();
    } catch (char *e) {
        std::cout << "Replace Error: " << e << std::endl;
    }
    return (0);
}