#include "Form.hpp"

Form::Form() : 
    name(""),
    gradeSigned(0),
    gradeExecute(0) {};

Form::Form(const std::string name,
            const int gradeSigned, 
            const int gradeExecute) :
    name(name),
    gradeSigned(gradeSigned),
    gradeExecute(gradeExecute) {
    if (gradeSigned > 150 || gradeExecute > 150)
        throw GradeTooLowException();
    else if (gradeSigned < 1 || gradeExecute < 1)
        throw GradeTooHighException();
}

Form::Form(const Form &other) : 
    name(other.getName()),
    gradeSigned(other.getGradeSigned()), 
    gradeExecute(other.getGradeExecute()) {
    *this = other;
}

Form &Form::operator=(const Form &other) {
    if (this != &other)
        isSigned = other.getIsSigned();
    return *this;
}

Form::~Form() {};

const char *Form::GradeTooHighException::what(void) const throw() {
    return "Grade too high!!";
}

const char *Form::GradeTooLowException::what(void) const throw() {
    return "Grade too low!!";
}

const char *Form::NotSignedException::what(void) const throw() {
    return "Form was not signed!!";
}

const std::string   Form::getName(void) const {
    return name;
}

bool  Form::getIsSigned(void) const {
    return isSigned;
}

int Form::getGradeSigned(void) const {
    return gradeSigned;
}

int Form::getGradeExecute(void) const {
    return gradeExecute;
}

void    Form::beSigned(Bureaucrat bureaucrat) {
    if (bureaucrat.getGrade() > gradeSigned)
        throw GradeTooLowException();
    isSigned = true;
}

std::ostream &operator<<(std::ostream &out, const Form &form) {
    out << "Name: " << form.getName() <<  std::endl;
    out << "GradeSigned: " << form.getGradeSigned() <<  std::endl;
    out << "GradeExecute: " << form.getGradeExecute() <<  std::endl;
    out << "Signed? -> "; 
    if (form.getIsSigned() == true)
        out << "Yes!" << std::endl;
    else
        out << "No!" << std::endl;
    return out;
}