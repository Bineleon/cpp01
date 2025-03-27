#include <iostream>

int main (void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string* strPTR = &string;
	std::string& strREF = string;

	std::cout << &string << std::endl;
	std::cout << strPTR << std::endl;
	std::cout << &strREF << std::endl;
	
	std::cout << string << std::endl;
	std::cout << *strPTR << std::endl;
	std::cout << strREF << std::endl;

}