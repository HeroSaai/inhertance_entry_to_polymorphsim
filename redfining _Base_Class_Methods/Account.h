#pragma once
#include<iostream>
class Account
{
	friend std::ostream& operator<<(std::ostream& os,const Account& acc);
public:
	double Balance; 
	Account(double amount); 
	Account(); 
	void withdraw(double amount); 
	void deposit(double amount); 
};

