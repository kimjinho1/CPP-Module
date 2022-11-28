#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) :
    name(name),
    grade(grade) {};

Bureaucrat::Bureaucrat(const Bureaucrat &other) {
    *this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
    if (this != &other)
        grade = other.getGrade();
    return *this;
}

Bureaucrat::~Bureaucrat() {};

const std::string &Bureaucrat::getName(void) const {
    return name;
}

int Bureaucrat::getGrade(void) const {
    return grade;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
    out << "Name: " << bureaucrat.getName() << ", Grade: " << bureaucrat.getGrade() << std::endl;
    return out;
}