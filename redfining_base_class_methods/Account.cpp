#include "Account.h"

std::ostream& operator<<(std::ostream& os, const Account& ACC)
{
	os << "account balance :" << ACC.balance;
	return os; 
}
Account::Account(double Balance)
	:balance{Balance} {
}
Account::Account():Account(0.0){} //delagting to arg constructor above
