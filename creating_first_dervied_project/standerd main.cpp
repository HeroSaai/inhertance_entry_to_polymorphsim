#include<iostream>
#include"Account.h"
#include"sav_account.h"

using namespace std; 

int main() {
	Account a;
	a.deposit(300.22);
	a.withdraw(22.1);
	Account* p = new Account;

	p->withdraw(30000); 

	p->deposit(10000000);
	sav_account b; 
	cout << b.intrest_rate << endl; 
	b.withdraw(454545);
	sav_account* c = new sav_account; 
	cout << c->intrest_rate << endl; 
	sav_account g("mymy", 300000);
	g.deposit(333);
	delete p;
	delete c; 
	return 0;
}