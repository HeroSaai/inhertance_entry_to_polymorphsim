#pragma once
#include<iostream>
#include "Account.h"
class Sav_Account :
    public Account
{
    friend std::ostream& operator<<(std::ostream& os, const Sav_Account &Svv);

protected:
    double int_rate; //interst rate 
public:
    Sav_Account();
    Sav_Account(double amount,double int_rate); 
   //withdraw is inherted from account
    void deposit(double amount); 
};

