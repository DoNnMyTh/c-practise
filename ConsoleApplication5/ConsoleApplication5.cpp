#include <iostream>

#include "Person.h"

int main()
{
	Person p1 ("Amit", "Chaudhary",9412);
	{
		Person p2;
	}

	std::cout << " After innermost block" << std::endl;
	std::string name = p1.getName();



	return 0;
}   
