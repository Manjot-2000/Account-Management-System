#include "Savings_Account.hpp"
#include<iostream>
#include<string>

Savings_account :: Savings_account(std :: string set_name, double set_balance, double set_int_rate)
                 : Account{set_name, set_balance}, interest_rate{set_int_rate} {}

bool Savings_account :: deposit(double amount) {
    amount += amount * interest_rate/100;
    return Account :: deposit(amount);
}

void Savings_account :: print(std :: ostream &os) const
{
    Account :: print(os);
    os << "  at : " << this -> interest_rate << "%]";
}

bool Savings_account :: withdraw(double amount)
{
    return Account :: withdraw(amount);
}

