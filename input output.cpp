#include<iostream> 
#include <string>

int main()
{
	//printing data
	
	std::cout<< "hello c++20 "<< std::endl;
	
	int age{16}l;
	std::cerr <<"error message : somthing is wrong" <<std::endl;
	std::clog <<" log message : somthing happened" << std::endl
	
	
	//DATA INPUT
	
	
	int age1;
	std::string name;
	
	std::cout <<"please type your name and age : "<<std::endl;
	
	//std::cin >>name;
	//std::cin >>age1;
	
	std::cin >> name >>age1;
	 
	std::cout << " hello " << name << " you are " << age1 <<"years old! " << std::endl;
	
	return 0;
}
