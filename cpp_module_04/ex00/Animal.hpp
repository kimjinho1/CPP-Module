#ifndef AINMAL_HPP
# define AINMAL_HPP

#include <iostream>

class Animal {
protected:
    std::string type;
    std::string name;
public:
    Animal();
    Animal(std::string name);
    Animal(Animal const &other);
    Animal &operator=(const Animal &other);
    ~Animal();

    virtual void    makeSound(void);
};

std::ostream &operator<<(std::ostream &out, const Animal &animal);

#endif
