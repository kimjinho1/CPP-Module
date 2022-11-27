#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    WrongCat(std::string name);
    WrongCat(WrongCat const &other);
    WrongCat &operator=(const WrongCat &other);
    ~WrongCat();
    
    std::string getType(void) const;
    void        makeSound(void) const;
};

#endif