#include "checking_account.hpp"
#include<iostream>

Checking_account :: Checking_account(std :: string name, double balance)
                  : Account{name, balance} {}
                    
bool Checking_account :: withdraw(double amount)
{
    amount += def_flat_fee;
    return Account :: withdraw(amount);
}

bool Checking_account :: deposit(double amount)
{
    return Account :: deposit(amount);
}

void Checking_account :: print(std :: ostream &os) const 
{
    Account :: print(os);
    os <<" Type : Checking Account]";
}
