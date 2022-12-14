#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
public:
    Cat();
    Cat(std::string name);
    Cat(Cat const &other);
    Cat &operator=(const Cat &other);
    ~Cat();
    
    std::string getType(void) const;
    void        makeSound(void) const;
};

#endif