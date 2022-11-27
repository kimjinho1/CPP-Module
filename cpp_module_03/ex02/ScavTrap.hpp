#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &other);
    ScavTrap&operator=(const ScavTrap &other);
    virtual ~ScavTrap();

    virtual void    attack(const std::string &target);
    void            guardGate(void);
};

std::ostream &operator<<(std::ostream &out, const ScavTrap &scavTrap);

#endif