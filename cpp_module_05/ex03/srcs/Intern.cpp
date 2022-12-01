#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {};

Intern::~Intern() {};

const char *Intern::UnknownFormException::what(void) const throw() {
    return "Unknown Form!!";
}

Form    *Intern::makeForm(const std::string &name, const std::string &target) {
    std::string formNames[3] = {
        "ShrubberyCreationForm",
        "RobotomyRequestForm",
        "PresidentialPardonForm"
    };
    for (int i = 0; i < 3; i++) {
        if (name == formNames[i])
        {
            switch (i)
            {
            case 0:
                std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
                return new ShrubberyCreationForm(target);
            case 1:
                std::cout << "Intern creates RobotomyRequestForm" << std::endl;
                return new RobotomyRequestForm(target);
            case 2:
                std::cout << "Intern creates PresidentialPardonForm" << std::endl;
                return new PresidentialPardonForm(target);
            default:
                break;
            }
        }
    }
    throw Intern::UnknownFormException();
    return (NULL);
}