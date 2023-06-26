#include "Bureaucrat.hpp"

int main(){
    try{
        Bureaucrat Lord("Snow", 50);
        Form  form("Lord commander", 50, 50);
            std::cout << Lord <<std::endl;
            std::cout << form <<std::endl;
            form.beSigned(Lord);
            Lord.signForm(form);
            
            std::cout << form <<std::endl;
        }
        catch (const std::exception &exe){
            std::cerr << exe.what() << std::endl;
        }
        return 0;
}
