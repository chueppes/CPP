#include "Form.hpp"

Form::Form():_name("Mister"), _toSign(150), _toExecute(150){
    this->_isSigned=false;
}

Form::~Form(){
    std::cout << "Destructor called\n";
}

Form::Form(const Form &copy) :_name(copy.getName()), _toSign(copy.getSignGrade()), _toExecute(copy.getExecuteGrade()), _isSigned(copy.getIsSigned()){

}

Form::Form(const std::string &name, int gradeSign, int gradeExec): _name(name), _toSign(gradeSign), _toExecute(gradeExec){
    this ->_isSigned = false;
    if(gradeSign < 1 || gradeExec < 1)
        throw GradeTooLowException();
    else if(gradeSign > 150 || gradeExec > 150)
        throw GradeTooHighException();
}

Form &Form::operator=(const Form &copy){
    this->_isSigned=copy.getIsSigned();
    return(*this);
}


std::string Form::getName() const{
    return(this->_name);
}

int Form::getSignGrade() const{
    return(this->_toSign);
}

int Form::getExecuteGrade() const{
    return(this->_toExecute);
}

bool Form::getIsSigned() const{
    return(this->_isSigned);
}

void Form::beSigned(const Bureaucrat &bureaucrat){
    if(bureaucrat.getGrade() > this->_toSign)
            throw Form::GradeTooLowException();
    else
        this->_isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw(){
    return ("Error: The grade is too high.");
}

const char *Form::GradeTooLowException::what() const throw(){
    return("Error: The grade is too low.");
}

std::ostream &operator<<(std::ostream &out, const Form &form){
    out << form.getName() << " form sign with grade " << form.getSignGrade() << " and exec grade of " << form.getExecuteGrade() << "\nForm is signed: " << form.getIsSigned();
    return out;
}

