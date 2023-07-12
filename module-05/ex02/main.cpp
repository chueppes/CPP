#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
    try{
        Bureaucrat Lord("Snow", 50);
        Bureaucrat Mormont("Jorah", 1);
        ShrubberyCreationForm f1("home");
        RobotomyRequestForm f2("Varys");
        PresidentialPardonForm f3("Tyrion Lannister");
        Lord.signForm(f1);
        Lord.signForm(f2);
        Mormont.signForm(f3);
        Lord.executeForm(f1);
        Lord.executeForm(f2);
        Mormont.executeForm(f3);
        Lord.executeForm(f3);
        }
        catch (const std::exception &exe){
            std::cerr << exe.what() << std::endl;
        }
        return 0;
}
