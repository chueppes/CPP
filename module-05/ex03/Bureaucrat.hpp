#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
    private:
        int _grade;
        const std::string _name;
    public:
    // constructors & desctructor
    Bureaucrat();
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat(const std::string name, int grade);
    ~Bureaucrat();
    //copy assingment operator
    Bureaucrat &operator = (const Bureaucrat &copy);
    //getters & setters
    std::string getName()const;
    int getGrade()const;
    //grade actions
    void addGrade();
    void subtractGrade();
    void signForm(AForm &form);
    void executeForm(const AForm  &form) ;
    class GradeTooHighException : public std::exception {
        public:
            virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
        public:
            virtual const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif