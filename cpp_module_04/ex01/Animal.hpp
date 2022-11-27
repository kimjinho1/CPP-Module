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
    virtual ~Animal();

    std::string         getType(void) const;
    virtual void        makeSound(void) const;
};

#endif
