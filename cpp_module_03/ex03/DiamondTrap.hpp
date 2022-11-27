#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
private:
    std::string name;
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap const &other);
    DiamondTrap&operator=(const DiamondTrap &other);
    virtual ~DiamondTrap();

    void    printStat(void);
    void    attack(const std::string &target);
    void    whoAmI(void);
};

std::ostream &operator<<(std::ostream &out, const DiamondTrap &diamondTrap);

#endif