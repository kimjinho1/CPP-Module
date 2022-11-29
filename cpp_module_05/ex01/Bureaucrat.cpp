#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("") {};

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name) {
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {
    *this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
    if (this != &other)
        grade = other.getGrade();
    return *this;
}

Bureaucrat::~Bureaucrat() {};

const char *Bureaucrat::GradeTooHighException::what(void) const throw() {
    return "Grade too high!!";
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw() {
    return "Grade too low!!";
}

const std::string Bureaucrat::getName(void) const {
    return name;
}

int Bureaucrat::getGrade(void) const {
    return grade;
}

void    Bureaucrat::increment(int amount) {
    if (grade - amount < 1)
        throw GradeTooHighException();
    grade -= amount;
}

void    Bureaucrat::decrement(int amount) {
    if (grade + amount > 150)
        throw GradeTooLowException();
    grade += amount;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
    out << "Name: " << bureaucrat.getName() << ", Grade: " << bureaucrat.getGrade();
    return out;
}