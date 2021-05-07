#include "Sav_Account.h"

Sav_Account::Sav_Account()
:Sav_Account(0.0 ,0.0){
}

Sav_Account::Sav_Account(double amount,double int_rate) :Account(amount),int_rate{int_rate}//we are using the parent class contructor the implmanting our int_rate
{
}

void Sav_Account::deposit(double amount)
{
	amount += amount * (int_rate / 100);
	Account::deposit(amount); //again we are using our parent class method
}

std::ostream& operator<<(std::ostream& os, const Sav_Account& Svv)
{
	os << "savings account balance: " << Svv.Balance << " interset rate:" << Svv.int_rate;
	return os; 
}
