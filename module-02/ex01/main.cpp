#include <iostream>
#include "Fixed.hpp"


int main(void) 
{
	Fixed a;
	Fixed b(10);
	Fixed c(42.42f);
	Fixed d(b);
	a = Fixed(1234.4321f);
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.turnToInt() << " as integer" << std::endl;
	std::cout << "b is " << b.turnToInt() << " as integer" << std::endl;
	std::cout << "c is " << c.turnToInt() << " as integer" << std::endl;
	std::cout << "d is " << d.turnToInt() << " as integer" << std::endl;
	return 0;
}