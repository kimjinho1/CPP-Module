#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog();
    Dog(std::string name);
    Dog(Dog const &other);
    Dog &operator=(const Dog &other);
    ~Dog();
    
    std::string     getType(void) const;
    void    makeSound(void) const;
};

#endif