#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

class Intern{
    public: 
        Intern();
        Intern(const Intern &target);
        ~Intern();
        Intern &operator=(const Intern &copy);
        class internException : public std::exception{
            public: 
                virtual const char *what() const throw();
        };

        AForm *makeForm(const std::string &form, const std::string &target);
};
#endif