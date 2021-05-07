#pragma once
#include "Account.h"
class sav_account :
    public Account
{
public:
    double intrest_rate; 

    //constructor
    sav_account(); 
    //arg contructor
    sav_account(std::string n, double a); 
    //destructor
    ~sav_account();
    void withdraw(double amount);
    void deposit(double amount);
};

