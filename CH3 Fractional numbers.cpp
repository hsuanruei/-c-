#include<iostream>
#include <iomanip>

int main(){
	
	//declare initialize the avribles
	float number1{1.12345678901234567890f};// precision : 7
	double number2 {1.12345678901234567890};//precision : 15
	long double number3{1.12345678901234567890L};
	
	//Print out the sizes
	std::cout <<"sizeof float : " <<sizeof(float) << std::endl;
	std::cout <<"sizeof double : " <<sizeof(double) << std::endl;
	std::cout <<"sizeof long double : " <<sizeof(long double) << std::endl;
	
	//precision 
	std::cout <<std::setprecision(20);//control the precision from srd::cout
	std::cout <<"number1 is : " << number1 << std::endl; //7digits
	std::cout <<"number2 is : " << number2 << std::endl;//15'ish digits
	std::cout <<"number3 is : " << number3 << std::endl;//15+ digits
	
	
	double number4 {192400023.0};
	
	
	std::cout << "number4 : " << number4  << std::endl;
	
	return 0;
}
