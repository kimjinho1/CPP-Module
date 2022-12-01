#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) 
    : Form(target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) 
    : Form(other) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
    Form::operator=(other);
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {};

const char *ShrubberyCreationForm::CanNotOpenOutfile::what(void) const throw() {
    return "Can't open outfile";
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (this->getIsSigned() == false)
		throw Form::NotSignedException();
	if (executor.getGrade() > this->getGradeExecute())
		throw Form::GradeTooLowException();
	std::ofstream   outfile(this->getName() + "_shrubbery");
	if (outfile.fail())
		throw ShrubberyCreationForm::CanNotOpenOutfile();
	outfile << TREE;
}
