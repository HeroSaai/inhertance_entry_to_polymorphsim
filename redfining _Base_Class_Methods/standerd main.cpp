#include<iostream>
#include"Account.h"
#include"Sav_Account.h"

using namespace std; 

int main() {
	Account a1{ 500 }; 
	cout << a1 << endl; 
	Sav_Account a2{ 3000 ,20};//I mean someone could dream right? interst rate of 20%
	cout << a2 << endl; 
	a2.deposit(1000);
	cout << a2 << endl;
	a2.withdraw(10000);
	return 0;
}