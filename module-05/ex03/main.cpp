#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(){
    try{
        AForm *form;
		AForm *file;
       
		Intern Drogo;
		Bureaucrat Daenerys("Khaleesi", 1);
		form = Drogo.makeForm("robotomy", "RUSH00");
		file = Drogo.makeForm("shrubbery", "createFile"),
		Daenerys.signForm(*form);
		Daenerys.signForm(*file);
		Daenerys.executeForm(*form);
		Daenerys.executeForm(*file);
        }
        catch (const std::exception &exe){
            std::cerr << exe.what() << std::endl;
        }
        return 0;
}
