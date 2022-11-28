#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
private:
    const std::string   name;
    int                 grade;
public:
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat &operator=(const Bureaucrat &other);
    ~Bureaucrat();

    const std::string &getName(void) const;
    int getGrade(void) const;

    class GradeTooHighException : public std::exception {
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
        const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif
