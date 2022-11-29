#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form {
private:
    const std::string   name;
    bool                isSigned;
    const int           gradeRequiredToSigned;
    const int           gradeRequiredToExecute;
public:
    Form(const std::string name, int grade);
    Form(const Form &other);
    Form &operator=(const Form &other);
    ~Form();

    class GradeTooHighException : public std::exception {
    public:
        const char *what(void) const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char *what(void) const throw();
    };

    void    beSigned(Bureaucrat bureaucrat);
    void    signForm(Bureaucrat bureaucrat);
};

std::ostream &operator<<(std::ostream &out, const Form &Form);

#endif