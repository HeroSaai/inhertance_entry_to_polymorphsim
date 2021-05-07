#include<iostream>

class Base
{
public:
	int value; 
	Base();
	Base(int n) :value{ n } {
		std::cout << "base arg constructor" << std::endl;
	}
	~Base();

private:

};

Base::Base()
{
	std::cout << "base no arg constructor" << std::endl;
}

Base::~Base()
{
	std::cout << "base desrturctor" << std::endl;
}
 
class Derived :public Base
{
	
public:
	int double_amount; 
	Derived();
	Derived(int n) :Base{ n },double_amount { n * 2 } { //I invoked base arg constructor by adding the constructor to initialize list here 
		std::cout << "Derived arg constructor" << std::endl; 
	}
	~Derived();

private:

};

Derived::Derived()
:Base(){ // I did the same here 
	std::cout << "Derived no arg constructor" << std::endl;
}

Derived::~Derived()
{
	std::cout << "Derived destructor" << std::endl;
}

int main() {
	//Base a; 
//	Base b{ 300 }; 
	Derived c{ 22 };
	return 0;
}