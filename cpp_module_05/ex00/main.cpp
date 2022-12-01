#include "Bureaucrat.hpp"

void    testHighConstructor(void) {
    try {
        Bureaucrat thc("thc", 0);
    }
    catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

void    testLowConstructor(void) {
    try {
        Bureaucrat tlc("tlc", 200);
    }
    catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

void    testWrongIncrement(void) {
    try {
        Bureaucrat twi("twi", 10);
        twi.increment(20);
    }
    catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

void    testWrongDecrement(void) {
    try {
        Bureaucrat twi("twd", 100);
        twi.decrement(60);
    }
    catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

void    testSuccessCase1(void) {
    try {
        Bureaucrat jinho1("jinho1", 100);
        std::cout << jinho1 << std::endl;
        jinho1.increment(60);
        std::cout << jinho1 << std::endl;
        jinho1.decrement(100);
        std::cout << jinho1 << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

void    testSuccessCase2(void) {
    try {
        Bureaucrat jinho2("jinho2", 1);
        std::cout << jinho2 << std::endl;
        jinho2.decrement(149);
        std::cout << jinho2 << std::endl;
        jinho2.increment(149);
        std::cout << jinho2 << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}


int main() {
    testHighConstructor();  std::cout << std::endl;
    testLowConstructor();   std::cout << std::endl;
    testWrongIncrement();   std::cout << std::endl;
    testWrongDecrement();   std::cout << std::endl;
    testSuccessCase1();     std::cout << std::endl;
    testSuccessCase2();
    return (0);
}