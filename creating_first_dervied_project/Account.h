#include<string>
#include<iostream>
#pragma once
class Account
{
public:
	std::string name; 
	double balance; 
	//constructoe no arg 
	Account(); 
	Account(std::string n, double a);
	//destructor
	~Account(); 
	void withdraw(double amount); 
	void deposit(double amount); 
};

