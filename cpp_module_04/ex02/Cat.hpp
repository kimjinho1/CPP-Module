#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
    Brain   *brain;
public:
    Cat();
    Cat(std::string name);
    Cat(Brain brain);
    Cat(Cat const &other);
    Cat &operator=(const Cat &other);
    ~Cat();
    
    void        makeSound(void) const;
    void        setBrain(std::string str, int n);
    Brain       &getBrain(void) const;
};

#endif