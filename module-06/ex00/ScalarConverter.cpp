#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
    std::cout << "Constructor called.\n";
}

ScalarConverter::ScalarConverter(const ScalarConverter &target){
    *this = target;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy){
    (void)copy;
    return *this;
}

ScalarConverter::ScalarConverter(){
    std::cout << "Destructor called.\n";
}

void ScalarConverter::convert(const std::string &literal){
    std::string charVal = "";
    int intVal = 0;
    float floatVal = 0.0f;
    double doubleVal=0.0;

    if(literal.size() == 1 && std::isprint(literal[0])&& !std::isdigit(literal[0])){
        charVal= literal[0];
        std::cout << "Char: " << charVal << "\n";
        std::cout << "Int: "<< static_cast<int>(charVal[0]) << std::endl;
        std::cout << "Float: "<<static_cast<float>(charVal[0])<< ".0f" << std::endl;
        std::cout << "Double : "<<static_cast<double>(charVal[0])<< ".0" << std::endl;
        return;        
    }
    intVal = std::atoi(literal.c_str());
    if(literal[literal.size()-1]=='f'){
        floatVal=std::atof(literal.c_str());
        doubleVal=static_cast<double>(floatVal);
    }
    else{
        doubleVal = std::atof(literal.c_str());
        floatVal = static_cast<float>(doubleVal);
    }
    
}
