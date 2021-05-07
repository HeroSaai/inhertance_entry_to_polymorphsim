#include<iostream>
using namespace std;

class Base
{
public:
	int value;
	Base();
	Base(int x) :value{ x } {
		cout << "Base arg constructor" << endl;
	}
	Base(const Base& rhs) :value{ rhs.value } {
		cout << "Base copy constructor " << endl;
	}
	Base& operator=(const Base& rhs) {
		cout << "Base copy assignment" << endl;
		if (this != &rhs) {
			this->value = rhs.value;
		}
		return *this;
	}
	Base& operator=(Base &&rhs) {
		this->value = rhs.value;
		rhs.value = 0;
		return *this;
	}
	~Base();

private:
};

Base::Base()
	:value{ 0 } {
	cout << "Base no arg constructor" << endl;
}

Base::~Base()
{
	cout << "Base destructor" << endl;
}
class Derived :public Base
{
public:
	int double_int;
	Derived();
	Derived(int x) :Base{ x }, double_int{ x * 2 } {
		cout << "Derived arg constructor" << endl;
	}
	Derived(const Derived& other) :Base{ other }, double_int{ other.double_int }{
		cout << "Derived copy constructor " << endl;
	}
	Derived& operator=(const Derived& other) {
		if (this == &other)
			return *this;
		Base::operator=(other);
		this->double_int = other.double_int;
		return *this;
	}
	Derived& operator=(Derived&& other) {

		Base::operator=(std::move(other));
		this->double_int = other.double_int;
		other.double_int = 0; 
		return *this;
	}
	
	~Derived();

private:
};

Derived::Derived()
	:Base{}, double_int{ 0 } {
	cout << "derived no arg constructor" << endl;
}

Derived::~Derived()
{
	cout << "derived destructor" << endl;
}
int main() {
	//Base b;
	//Base b1{ 300 };
	//Base b2{ b1 };
	//b1 = b2;
	Derived d; 
	Derived d1{ 55 }; 
	Derived d2{ d1 }; 
	Derived d3 = d2; 
	d3 = Derived{ 5000 };
	return 0;
}