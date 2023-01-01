#include <iostream>

int main(){
	int var1 {12};
	int var2 {13.0};
	int var3 {14.0f};
	int var4 {15.01};
	int var5 {'e'};
	
	//int modifier suffixes
	int var6 { 123u};//unsigned
	int var7 {123ul};//unsigned long 
	int var8 {123ll};//long long
	
	
	std::cout << "var1 occupies : " << sizeof(var1) << "bytes" << std::endl;
	std::cout << "var2 occupies : " << sizeof(var2) << "bytes" << std::endl;
	std::cout << "var3 occupies : " << sizeof(var3) << "bytes" << std::endl;
	std::cout << "var4 occupies : " << sizeof(var4) << "bytes" << std::endl;
	std::cout << "var5 occupies : " << sizeof(var5) << "bytes" << std::endl;
	std::cout << "var6 occupies : " << sizeof(var6) << "bytes" << std::endl;
	std::cout << "var7 occupies : " << sizeof(var7) << "bytes" << std::endl;
	std::cout << "var8 occupies : " << sizeof(var8) << "bytes" << std::endl;
	
	return 0;
} 
