#include <iostream>


int main(){
	
	//Addition
	int number1{2};
	int number2{7};
	
	int result = number1 + number2;
	std::cout << "result : " << result << std::endl;
	
	//Subtraction
	result = number2 - number1;
	std::cout << "result : " << std::endl;
	
	result = number1 - number2;
	std::cout << "result : " << std::endl;
	
	//multiple
	result = number1 * number2;
	std::cout << "result : " << result << std::endl;
	 
	//division
	result = number2 / number1;
	std::cout << "result : " << result << std::endl;
	
	//modulus
	result = number2 % number1;
	std::cout << "result : " << result << std::endl;
	 
	 result = 31 % 10;
	 std::cout << "result : " << result << std::endl;
	 
	return 0;
	 
}
