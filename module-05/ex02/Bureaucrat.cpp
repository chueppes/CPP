#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("Shea"){
    this->_grade=150;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Destructor called\n";
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name)
{
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade=grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy):_name(copy._name){
    this->_grade = copy._grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy){
    this->_grade=copy._grade;
    return(*this);
}


std::string Bureaucrat::getName()const{
    return(this->_name);
}

int Bureaucrat::getGrade() const{
    return(this->_grade);
}

void Bureaucrat::addGrade(){
    if(this->_grade == 1) throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::subtractGrade(){
    if(this->_grade == 150) throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return ("Error: The grade is too high.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
    return("Error: The grade is too low.");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat){
    out << bureaucrat.getName() << " is a bureaucrat, it's grade is " << bureaucrat.getGrade();
    return out;
}

void Bureaucrat::signForm(AForm &form){
    try{
        form.beSigned(*this);
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception &exe){
        std::cerr << " was not able to sign " << form.getName() << " because " << exe.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const &form)const{
    try{
        form.execute(*this);
    }
    catch(const std::exception &exe)
    {
        std::cerr << "It was not possible to execute " <<form.getName() << " because " << exe.what() << '\n';
    }
}
