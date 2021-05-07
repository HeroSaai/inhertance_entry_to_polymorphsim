#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"
#include "checking_Account.h"
#include"Trust_account.h"


using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;

    //// Accounts
    //vector<Account> accounts;
    //accounts.push_back(Account{});
    //accounts.push_back(Account{ "Larry" });
    //accounts.push_back(Account{ "Moe", 2000 });
    //accounts.push_back(Account{ "Curly", 5000 });

    //display(accounts);
    //deposit(accounts, 1000);
    //withdraw(accounts, 2000);

    //// Savings 

    //vector<Savings_Account> sav_accounts;
    //sav_accounts.push_back(Savings_Account{});
    //sav_accounts.push_back(Savings_Account{ "Superman" });
    //sav_accounts.push_back(Savings_Account{ "Batman", 2000 });
    //sav_accounts.push_back(Savings_Account{ "Wonderwoman", 5000, 5.0 });

    //display(sav_accounts);
    //deposit(sav_accounts, 1000);
    //withdraw(sav_accounts, 2000);

  /*  Checking_Account a("test", 5000, 30);*/

    //cout << a << endl;
    //a.withdraw(4970);
    //cout << a;
//// cheaking 
    //vector<Checking_Account> check_acc;
    //check_acc.push_back(Checking_Account{});
    //check_acc.push_back(Checking_Account{"saai",});
    //check_acc.push_back(Checking_Account{"loli",2000});
    //check_acc.push_back(Checking_Account{"omg",6000,300});
    //withdraw(check_acc, 1000);
    Trust_account a{ "moma",100.0,2.0 }; 
    cout << a << endl;
    a.deposit(10000);
    cout << a << endl;
    a.withdraw(2000);
    cout << a << endl;
    a.withdraw(2000);
    cout << a << endl;
    a.withdraw(2000);
    cout << a << endl;
    a.withdraw(2000);
    cout << a << endl;
    return 0;
}

