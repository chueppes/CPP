#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>

class ScalarConverter{
    private:
    public:
    ScalarConverter();
    ScalarConverter(const ScalarConverter &target);
    ~ScalarConverter();
    ScalarConverter &operator=(const ScalarConverter &copy);
    static void convert(const std::string &literal);
};

#endif