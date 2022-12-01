#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) 
    : Form(target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) 
    : Form(other) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
    Form::operator=(other);
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {};

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (this->getIsSigned() == false)
		throw Form::NotSignedException();
	if (executor.getGrade() > this->getGradeExecute())
		throw Form::GradeTooLowException();
    std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
