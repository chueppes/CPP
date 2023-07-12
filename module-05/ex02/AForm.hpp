#ifndef AFORM_HPP
#define AFORM_HPP

#include"Bureaucrat.hpp"

class Bureaucrat;

class AForm{
    private:
        const std::string _name;
        const int _toSign;
        const int _toExecute;
        bool    _isSigned;
    public:
        //constructors and destructors
        AForm();
        AForm(const AForm &copy);
        AForm(const std::string &name, int gradeSign, int gradeExec);        ~AForm();
        //copy assignment operator
        AForm &operator=(const AForm &copy);
        //getters
        int getSignGrade()const;
        int getExecuteGrade()const;
        std::string getName()const;
        bool getIsSigned()const;
        virtual void execute(const Bureaucrat &executor)const=0;
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
        class FormNotSignedException : public std::exception{
            public:
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, const AForm &form);
#endif