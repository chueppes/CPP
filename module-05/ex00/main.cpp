#include "Bureaucrat.hpp"

int main(){
    try{
        Bureaucrat Lord("Snow", 50);
        Bureaucrat  King;
            std::cout << Lord <<std::endl;
            std::cout << King <<std::endl;
            King.addGrade();
            Lord.subtractGrade();
            std::cout << Lord <<std::endl;
            std::cout << King <<std::endl;
            King.addGrade();
            Lord.subtractGrade();
            std::cout << Lord <<std::endl;
            std::cout << King <<std::endl;
        }
        catch (const std::exception &exe){
            std::cerr << exe.what() << std::endl;
        }
}
