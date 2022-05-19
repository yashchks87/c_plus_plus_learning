#include <iostream>
// Just basic class
class MainClass{
	// This values are public
	public:
		// Basic identifiers
		int num1;
// DO NOT FORGET TO ADD semicolon after class name
};
int main(){
	MainClass obj1;
	obj1.num1 = 25;
	std::cout << obj1.num1 << "\n";
}