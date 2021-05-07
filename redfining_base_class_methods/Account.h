#pragma once
#include <iostream> 
class Account
{
	friend std::ostream& operator <<(std::ostream& os, const Account& ACC); 
public:
	double balance; 

	Account(double Balance);
	Account();
	void withdraw(); 
	void deposit(double amount); 
};

