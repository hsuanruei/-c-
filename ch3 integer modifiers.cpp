#include<iostream>


int main()
{
	signed int value1 {10};
	signed int value2 {-300};
	
	std::cout <<"value1 : " << value1 << std::endl;
	std::cout <<"value2 : " << value2 << std::endl;
	std::cout <<"sizeof(value1) : " << sizeof(value1 )<< std::endl;
	std:: cout << "sizeof(value2) : " << sizeof(value2 )<< std::endl;
	
	unsigned int value3 {4};
	//unsigned int value4{-5}; //compiler error
	
	//short and long
    
	short short_var {-32768}; // 2 bytes
	short int short_int {455};
	signed short signed_short{122};
	signed short int signed_short_int{-456};
	unsigned short int unsigned_short_int{456};
	
	int int_var {55}; // 4 bytes
    signed signed_var {66};
    signed signed_int {77};
	unsigned int unsigned_int{77};
	
	long long_var {88}; //4 or 8 bytes
	long int long_int {33};
	signed long signed_long {44};
	unsigned long int unsigned_long_int{44};
	 
    long long long_long {888}; // 8 bytes
    long long int long_long_int{999};
    signed long long signed_long_long{444};
    signed long long int signed_long_long_int{1234};
    unsigned long long unsigned_long_long{1234};
    unsigned long long int unsigned_long_long_int{1234};
    
    std::cout << "short variable : " << short_var << " , size : "<< sizeof (short) << "bytes" << std::endl;
    
    std::cout << "short Int : " << short_int << " , size : "<< sizeof (short int) << "bytes" << std::endl;
    
	std::cout << "signed short int: " << signed_short_int << " , size : "<< sizeof (signed short int) << "bytes" << std::endl;
	
	std::cout << "signed short int : " << signed_short_int << " , size : "<< sizeof (signed short int) << "bytes" << std::endl;
	
	std::cout << "-------------------------------" << std::endl;
	
	
	
	std::cout << "int variable : " << int_var << " , size : "<< sizeof (int) << "bytes" << std::endl;
    
    std::cout << "signed variable : " << signed_var << " , size : "<< sizeof (signed) << "bytes" << std::endl;
    
	std::cout << "signed int : " << signed_int << " , size : "<< sizeof (signed int) << "bytes" << std::endl;
	
	std::cout << "unsigned int : " << unsigned_int << " , size : "<< sizeof (unsigned int) << "bytes" << std::endl;
	
	std::cout << "-------------------------------" << std::endl;
	
	
	
	std::cout << " long : " << long_var << " , size : "<< sizeof (long) << "bytes" << std::endl;
    
    std::cout << "long Int : " << long_int << " , size : "<< sizeof (long int) << "bytes" << std::endl;
    
	std::cout << "signed long : " << signed_long << " , size : "<< sizeof (signed long) << "bytes" << std::endl;
	
	std::cout << "unsigned long int : " << unsigned_long_int << " , size : "<< sizeof (unsigned long int) << "bytes" << std::endl;
	
	std::cout << "-------------------------------" << std::endl;
	
	
	
		std::cout << " long long: " << long_long << " , size : "<< sizeof (long long) << "bytes" << std::endl;
    
    std::cout << "long long Int : " << long_long_int << " , size : "<< sizeof (long long int) << "bytes" << std::endl;
    
	std::cout << "signed long long : " << signed_long_long << " , size : "<< sizeof (signed long long) << "bytes" << std::endl;
	
	std::cout << "signed long long : " << signed_long_long_int << " , size : "<< sizeof (signed long long int) << "bytes" << std::endl;
	
	std::cout << "unsigned long long int : " << unsigned_long_long_int << " , size : "<< sizeof (unsigned long long int) << "bytes" << std::endl;
	
	std::cout << "-------------------------------" << std::endl;
	
	return 0;
	
}
