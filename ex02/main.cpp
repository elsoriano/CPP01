#include <string>
#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* strp = &str;
	std::string& strr = str;

	std::cout << "Address of string: " <<&str << std::endl;
	std::cout << "Address held by strp: " << strp << std::endl;
	std::cout << "Address held by strr: " << &strr << std::endl;
	std::cout << "Value of string: " << str << std::endl;
	std::cout << "Value pointed to by strp: " << *strp << std::endl;
	std::cout << "Value pointed to by strr: " << strr << std::endl;
	return 0;
}