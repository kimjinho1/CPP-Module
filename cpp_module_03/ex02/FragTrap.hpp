#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const &other);
    FragTrap&operator=(const FragTrap &other);
    virtual ~FragTrap();

    virtual void    attack(const std::string &target);
    void            highFivesGuys(void);
};

std::ostream &operator<<(std::ostream &out, const FragTrap &fragTrap);

#endif