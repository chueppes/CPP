#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include <bits/stdc++.h> 
#include "AForm.hpp"



class ShrubberyCreationForm: public AForm{
    private: 
        std::string _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &copy);
        ShrubberyCreationForm(const std::string &target);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);

        std::string getTarget() const;
        void execute(Bureaucrat const &exec) const;
};

#endif