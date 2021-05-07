
#include "Account.h"



Account::Account()
	:name{ "empty_acc" }, balance{0.0} {
}

Account::Account(std::string n, double a)
	: name{ n }, balance{a}{
}

Account::~Account()
{
}

void Account::withdraw(double amount)
{
	std::cout << "action called to witdraw :" << amount << std::endl; 
}

void Account::deposit(double amount)
{
	std::cout << "action called to deposit :" << amount << std::endl; 
}
