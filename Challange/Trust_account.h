#pragma once
#include "Savings_Account.h"
class Trust_account :
	public Savings_Account
{
	friend std::ostream& operator<<(std::ostream& os, const Trust_account& account);
public:
	Trust_account(std::string name, double balance, double int_rate);
	bool deposit(double amount);
	bool withdraw(double amount);
};
