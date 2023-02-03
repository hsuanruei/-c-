#include<iostream>

int main(){
	int elephant_count;
	
	int lion_count{};
	
	int dog_count {10};
	
	int cat_count {15};
	
	int domesticated_animals {dog_count + cat_count};
	
	
	//int narrowing_conversation {2.9};//compiler error
	
	
	std::cout <<"elephant_count : " << elephant_count << std::endl;
	std::cout <<"lion_count : " << lion_count << std::endl;
	std::cout <<"dog_count : " << dog_count << std::endl;
	std::cout <<"cat_count : " << cat_count << std::endl;
	std::cout <<"domesticated animals count : " << domesticated_animals << std::endl;
	
	
	return 0;
	
}
