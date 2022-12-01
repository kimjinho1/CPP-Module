#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
    const std::string   name;
    bool                isSigned;
    const int           gradeSigned;
    const int           gradeExecute;
    Form();
public:
    Form(const std::string name, const int gradeSigned, const int gradeExecute);
    Form(const Form &other);
    Form &operator=(const Form &other);
    virtual ~Form();

    class GradeTooHighException : public std::exception {
    public:
        const char *what(void) const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char *what(void) const throw();
    };

    class NotSignedException : public std::exception {
    public:
        const char *what(void) const throw();
    };

    const std::string   getName(void) const;
    bool                getIsSigned(void) const;
    int                 getGradeSigned(void) const;
    int                 getGradeExecute(void) const;

    void                beSigned(Bureaucrat bureaucrat);
    void                signForm(Bureaucrat bureaucrat);
    virtual void        execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, const Form &Form);

#endif