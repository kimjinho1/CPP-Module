#include "Bureaucrat.hpp"
#include "Form.hpp"

void    testHighConstructor(void) {
    try {
        Form thc("thc", 0, 0);
    }
    catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

void    testLowConstructor(void) {
    try {
        Form tlc("tlc", 200, 200);
    }
    catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

void    testSignSuccess(void) {
    try {
        Bureaucrat btss("btss", 15);
        Form ftss("ftss", 20, 30);
        ftss.beSigned(btss);
        std::cout << ftss << std::endl;
        btss.signForm(ftss);
    }
    catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

void    testSignFail(void) {
    try {
        Bureaucrat btsf("btss", 40);
        Form ftsf("ftss", 20, 30);
        ftsf.beSigned(btsf);
        std::cout << ftsf << std::endl;
        btsf.signForm(ftsf);
    }
    catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

int main() {
    testHighConstructor();  std::cout << std::endl;
    testLowConstructor();   std::cout << std::endl;
    testSignSuccess();   std::cout << std::endl;
    testSignFail();   std::cout << std::endl;
    return (0);
}