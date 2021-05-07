#pragma once
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include"checking_Account.h"
#include"Trust_account.h"

// Utility helper functions for Account class

void display(const std::vector<Account>& accounts);
void deposit(std::vector<Account>& accounts, double amount);
void withdraw(std::vector<Account>& accounts, double amount);

// Utility helper functions for Savings Account class

void display(const std::vector<Savings_Account>& accounts);
void deposit(std::vector<Savings_Account>& accounts, double amount);
void withdraw(std::vector<Savings_Account>& accounts, double amount);

//utility helper function for cheaking Account class

void display(const std::vector<Checking_Account>& accounts);
void deposit(std::vector<Checking_Account>& accounts, double amount);
void withdraw(std::vector<Checking_Account>& accounts, double amount);

//utility helper function for Trust Account class

void display(const std::vector<Trust_account>& accounts);
void deposit(std::vector<Trust_account>& accounts, double amount);
void withdraw(std::vector<Trust_account>& accounts, double amount);
