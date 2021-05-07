#include "Account.h"
#include<iostream>

Account::Account() :Account(0.0){ //dangling the no arg to arg constructor

}
Account::Account(double amount) : Balance{amount} {}
void Account::withdraw(double amount) {
	if (amount > Balance)
		std::cout << "insufficient funds" << std::endl; \
		Balance -= amount; 
	
}
void Account::deposit(double amount) {
	Balance += amount;
}
std::ostream& operator<<(std::ostream& os, const Account& acc) {
	os << "Account balance:" << acc.Balance;

	return os; 
}