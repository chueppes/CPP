#ifndef FORM_HPP
#define FORM_HPP

#include"Bureaucrat.hpp"

class Bureaucrat;

class Form{
    private:
        const std::string _name;
        const int _toSign;
        const int _toExecute;
        bool    _isSigned;
    public:
        //constructors and destructors
        Form();
        Form(const Form &copy);
        Form(const std::string &name, int gradeSign, int gradeExec);        ~Form();
        //copy assignment operator
        Form &operator=(const Form &copy);
        //getters
        int getSignGrade()const;
        int getExecuteGrade()const;
        std::string getName()const;
        bool getIsSigned()const;
        //actions
        void beSigned(const Bureaucrat &bureaucrat);
        //exceptions
        class GradeTooLowException : public std::exception{
            public:
                virtual const char *what() const throw();
        };
        class GradeTooHighException : public std::exception{
            public:
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, const Form &form);
#endif