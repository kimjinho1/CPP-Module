#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string name;
    int         hitPoints;
    int         energyPoints;
    int         attackDamage;
public:
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &other);
    ClapTrap &operator=(const ClapTrap &other);
    ~ClapTrap();

    std::string getName(void) const;
    int         getHitPoints(void) const;
    int         getEnergyPoints(void) const;
    int         getAttackDamage(void) const;
    void        attack(const std::string &target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);
};

std::ostream &operator<<(std::ostream &out, const ClapTrap &clapTrap);

#endif
