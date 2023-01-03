#include <iostream>


int main(){
	
	int var1{123};
	std::cout << "var1 : " << var1 << std::endl;
	
	var1 = 55;
	std::cout << "var1 : " << var1 << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "---------------------" << std::endl;
	
	double var2 {44.55};
	std::cout << "var2 : " << var2 << std::endl;
	
	var2 = 99.99;
	std::cout << "var2 : " << var2 << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "---------------------------" << std::endl;
	 
	std::cout << std::endl;
	bool state{false};
	std::cout << std::boolalpha;
	std::cout << "state : " << state <<std::endl;
	 
	state = true;
	 
	std::cout << "state : " << state << std::endl; 
	
	//auto type deduction
	//Careful about auto assigments
	auto var3 {333u};//declare & initialize with type deduction
	
	var3 = -22;//assign negative number, DANGER!
	
	std::cout << "var3 : " << var3 << std::endl;
	 
	return 0;
	
}





