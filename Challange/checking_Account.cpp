#include "checking_Account.h"

//constructor
Checking_Account::Checking_Account(std::string name, double balance, double wth_fee)
	:Account(name, balance), wth_fee{ wth_fee }{}  //dalgating to parent class

bool Checking_Account::withdraw(double amount)
{
	if (amount < 0)
		return false;
	else
		amount += wth_fee;
	return  Account::withdraw(amount);// makeing sure the withdraw is scc or not
}

std::ostream& operator<<(std::ostream& os, const Checking_Account& acc)
{
	os << "cheacking account " << acc.name << " current balance :" << acc.balance;
	return os;
}