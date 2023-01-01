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
	
	
	//sicentific notation
	//what we have seen so far in terms of floating point type
	//is fixed notation. There is another nonation, scientific
	//that is handy if you have very huge numbers or small numbers
	//to represent
	
	std::cout <<"-----------------------------" << std::endl;
	
	double number5 {192400023};
	double number6 {1.9240023e8};
	double number7 {1.924e8};
	
	double number8{0.00000000003498};
	double number9{3.498e-11};//oultiply with 10 exp(-11)
	
	std::cout <<"number5 is : " << number5 << std::endl;
	std::cout <<"number6 is : " << number6 << std::endl;
	std::cout <<"number7 is : " << number7 << std::endl;
	std::cout <<"number8 is : " << number8 << std::endl;
	std::cout <<"number9 is : " << number9 << std::endl;
	

//infinty and Nan
std::cout <<std::endl;
std::cout << "infinty and Nan" <<std::endl;

double number10{5.6};
double number11{};//Initalized to 0
double number12{};//Initalized to 0

//infity
double result {number10 /number11 };

std::cout <<number10 <<"/" << number11 << " yields " << result << std::endl;
std::cout <<result <<"+" << number10 << " yields " << result + number10 << std::endl;

//Nan
result = number11 / number12;

std::cout << number11 << "/" << number12 << "=" << result << std:endl;

	
	return 0;
}
