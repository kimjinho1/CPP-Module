#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
private:
    const std::string   name;
    int                 grade;
    Bureaucrat();
public:
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat &operator=(const Bureaucrat &other);
    ~Bureaucrat();

    class GradeTooHighException : public std::exception {
    public:
        const char *what(void) const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char *what(void) const throw();
    };

    const std::string   getName(void) const;
    int                 getGrade(void) const;
    void                increment(int amount);
    void                decrement(int amount);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif
