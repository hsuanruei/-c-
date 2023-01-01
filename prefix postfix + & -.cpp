#include <iostream>


int main(){
	int value{5};
	
	//increment by one
	value = value+1;//6
	std::cout <<"the value is : "<<value << std::endl;//6
	
	value =5;//reset value to 5
	
	//decrement by one
	value =value -1;//4
	std::cout <<"the value is : "<<value << std::endl;//4
	
	//================================================
	
	std::cout<<"======postfix increment and decrement======"<< std::endl;
	//reset value to 5
	value =5;
	
	std:: cout <<"the value is (incrementing) : " << value++ << std::endl;
    std:: cout <<"the value is  : " << value << std::endl;
    
    std:: cout << std::endl;
    
    //decrement with postfix
    
    //reset value to 5
    value = 5;
    
    
    std:: cout <<"the value is (decrementing) : " << value-- << std::endl;//5
	std:: cout <<"the value is : " << value << std::endl;//4
	
    
    //========================================================================
    
    
    std:: cout <<"======ferfix increment and decrement======"<< std::endl;
	
	
	//reset value to 5
	value=5;
	
	++value ;
	std:: cout <<"the value is (prefix++) : "<< std::endl;//6
    
	//reset value to 5
	value=5;
    std:: cout <<"the value is (prefix++ in place) : "<< std::endl;
    
    std::cout <<std:: endl;
    
    //prefix : decrementing
    
    //reset value to 5
    value = 5;
    --value ;
    std::cout <<"the value is (prefix-- ) : "<< std::endl;
    
    //reset value to 5
    value =5;
    std:: cout <<"the value is (prefix-- in place) : "<< std::endl;
	
	return 0;
	
}
