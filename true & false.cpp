#include <iostream>

int main(){
	
	
	bool red_light {true};
	bool green_light{false};
	
	if(red_light == true){
		std::cout << "STOP!!"<< std::endl;
	}else{
		std::cout << "GO THROUGH!! "<< std::endl;
	}
	
	
	if(green_light){
		std::cout << "THE LIGHT IS GREEN!!" << std::endl;	
	}else{
		std::cout << "THE LIGHT IS NOT GREEN!!" << std::endl;
	}
	//sizeof
	std::cout << "sizeof(bool) : " << sizeof(bool) << std::endl; 
	
	//printing out a bool
	//1 -->> true
	//0 -->> false
	std::cout << std::endl;
	std::cout << "red_light : " << red_light << std::endl;
	std::cout << "green_light : " << green_light << std::endl;
	
	
	return 0;
}
