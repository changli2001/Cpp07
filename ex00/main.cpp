#include <iostream>
#include "whatever.hpp"

int main( void )
{

	std::cout << "################### testing With integer Types ##########################\n";

	int var_1 = 100;
	int var_2 = 100;
	
	//swap int values ;	
	std::cout << "The value of Var_1 before swaping is : " << var_1 << std::endl;
	std::cout << "The value of var_2 before swaping is : " << var_2 << std::endl;
	::swap(var_1, var_2);
	std::cout << "The value of Var_1 after swaping is : " << var_1 << std::endl;
	std::cout << "The value of Var_2 after swaping is : " << var_2 << std::endl;
	
	//Min value
	std::cout << " >>> Getting the Min value <<< \n";
	std::cout << "The min value is : " << ::min(var_1, var_2) << std::endl;

	//Max value
	std::cout << " >>> Getting the Max value <<< \n";
	std::cout << "The Max value is : " << ::max(var_1, var_2) << std::endl;
    
	std::cout << "################### testing With double Types ##########################\n";

	double db_1 = 10.988;
	double db_2 = -90.12;

	//swap double values ;	
	std::cout << "The value of db_1 before swaping is : " << db_1 << std::endl;
	std::cout << "The value of db_2 before swaping is : " << db_2 << std::endl;
	::swap(db_1, db_2);
	std::cout << "The value of db_1 after swaping is : " << db_1 << std::endl;
	std::cout << "The value of db_2 after swaping is : " << db_2 << std::endl;
	
	//min value
	std::cout << " >>> Getting the min value <<< \n";
	std::cout << "The min value is : " << ::min(db_1, db_2) << std::endl;
	//Max value
	std::cout << " >>> Getting the Max value <<< \n";
	std::cout << "The Max value is : " << ::max(db_1, db_2) << std::endl;

		std::cout << "################### testing With std::string Types ##########################\n";

	std::string myName_1 = "changli";
	std::string yourName = "asaamir";

	//swap string values ;	
	std::cout << "The value of db_1 before swaping is : " << myName_1 << std::endl;
	std::cout << "The value of db_2 before swaping is : " << yourName << std::endl;
	::swap(myName_1, yourName);
	std::cout << "The value of db_1 after swaping is : " << myName_1 << std::endl;
	std::cout << "The value of db_2 after swaping is : " << yourName << std::endl;
	
	//min value
	std::cout << " >>> Getting the min value <<< \n";
	std::cout << "The min value is : " << ::min(myName_1, yourName) << std::endl;
	//Max value
	std::cout << " >>> Getting the Max value <<< \n";
	std::cout << "The Max value is : " << ::max(myName_1, yourName) << std::endl;

}
