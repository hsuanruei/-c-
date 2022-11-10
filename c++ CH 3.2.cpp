#include <iostream>


int main (){
	
	//braced intializers
	
	int elephant_count;
	
	int lion_count{}; //initializes to zero
	
	int dog_count {10}; // initializes to 10
	
	int cat_count {10}; // initializes to 15
	
	int domesticated_animals { dog_count + cat_count };
	
	//int new_number{doesnt_exist}; 
	
	//int narrowing_conversion {2.9};
	
	std::cout <<"elephant count : " <<elephant_count << std::endl;
	
	std::cout <<"lion count : " <<lion_count << std::endl;
	
	std::cout <<"dog count : " <<dog_count << std::endl;
	
	std::cout <<"cat count : " <<cat_count << std::endl;
	
	std::cout <<"domesticated animal count : " <<domesticated_animals << std::endl;
	
	
	return 0;
}
