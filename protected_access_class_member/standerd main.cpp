#include<iostream>

class Base
{
public:
	int a; 
	void diplay() { std::cout << a << "," << b << "," << c << std::endl; }
	Base();
	~Base();
protected:
	int b; 

private:
	int c; 
};

Base::Base()
{
}

Base::~Base()
{
}

class Dreived : protected Base 
{
public:
	void Access_base_members() {
		a = 333; 
		b = 333; 
		//c = 120;
	}
	Dreived();
	~Dreived();

private:

};

Dreived::Dreived()
{
}

Dreived::~Dreived()
{
}

int main() {
	Base a; 
	a.a = 100; 
	a.diplay();
	Dreived b; 
	
	return 0;
}