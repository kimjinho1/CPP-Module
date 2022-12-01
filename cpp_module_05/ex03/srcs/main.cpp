#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void    testInternShrubberyCreation(void) {
    try {
        std::cout << "--- Test Intern ShrubberyCreationForm ---" << std::endl;
        std::cout << std::endl;
        Bureaucrat b1("b1", 25);
        Bureaucrat b2("b2", 148);
        Intern intern;
        Form *form = intern.makeForm("ShrubberyCreationForm", "shrubbery");
        b1.signForm(*form);
        b1.executeForm(*form);
        b2.executeForm(*form);
        std::cout << std::endl;
        std::cout << "--- Test Intern ShrubberyCreationForm Finish ---" << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
        std::cout << "--- Test Intern ShrubberyCreationForm Finish ---" << std::endl;
    }
}

void    testInternRobotomyRequestForm(void) {
    try {
        std::cout << "--- Test Intern RobotomyRequestForm ---" << std::endl;
        std::cout << std::endl;
        Bureaucrat b1("b1", 25);
        Bureaucrat b2("b2", 80);
        Intern intern;
        Form *form = intern.makeForm("RobotomyRequestForm", "robotomy");
        b1.signForm(*form);
        b1.executeForm(*form);
        b2.executeForm(*form);
        std::cout << std::endl;
        std::cout << "--- Test Intern RobotomyRequestForm Finish ---" << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
        std::cout << "--- Test Intern RobotomyRequestForm Finish ---" << std::endl;
    }
}

void    testInternPresidentialPardonForm(void) {
    try {
        std::cout << "--- Test Intern PresidentialPardonForm ---" << std::endl;
        std::cout << std::endl;
        Bureaucrat b1("b1", 1);
        Bureaucrat b2("b2", 30);
        Intern intern;
        Form *form = intern.makeForm("PresidentialPardonForm", "robotomy");
        b1.signForm(*form);
        b1.executeForm(*form);
        b2.executeForm(*form);
        std::cout << std::endl;
        std::cout << "--- Test Intern PresidentialPardonForm Finish ---" << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
        std::cout << "--- Test Intern PresidentialPardonForm Finish ---" << std::endl;
    }
}

int main() {
    testInternShrubberyCreation();      std::cout << std::endl;
    testInternRobotomyRequestForm();    std::cout << std::endl;
    testInternPresidentialPardonForm(); std::cout << std::endl;
    return (0);
}