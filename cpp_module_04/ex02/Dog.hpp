#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
    Brain   *brain;
public:
    Dog();
    Dog(std::string name);
    Dog(Brain brain);
    Dog(Dog const &other);
    Dog &operator=(const Dog &other);
    ~Dog();
    
    void        makeSound(void) const;
    void        setBrain(std::string str, int n);
    Brain       &getBrain(void) const;
};

#endif