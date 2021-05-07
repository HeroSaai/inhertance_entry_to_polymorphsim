#include "Trust_account.h"

Trust_account::Trust_account(std::string name, double balance, double int_rate)
	:Savings_Account{ name,balance,int_rate } {
}

bool Trust_account::deposit(double amount)
{
	if (amount >= 5000)
		amount += 50;
	return  Savings_Account::deposit(amount);
}

int count{ 0 };
bool Trust_account::withdraw(double amount)
{
	if (amount > (balance * 0.2) || count > 3)
		return false;
	else return (Savings_Account::withdraw(amount));
}

std::ostream& operator<<(std::ostream& os, const Trust_account& account)
{
	os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%]";
	return os;
}