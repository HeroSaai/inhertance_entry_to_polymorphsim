#include "sav_account.h"


sav_account::sav_account()
	:intrest_rate{3.0} {
}

sav_account::sav_account(std::string n, double a)
 {
}

sav_account::~sav_account()
{
}

void sav_account::withdraw(double amount)
{
	std::cout << "action from sav_account called to withdraw :" << amount << std::endl;
}


void sav_account::deposit(double amount)
{
	std::cout << "action from "<<name <<"sav_account called to diposit :" << amount << std::endl;
}


