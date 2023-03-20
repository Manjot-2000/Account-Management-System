#include "Trust_Account.hpp"
#include<iostream>

Trust_Account :: Trust_Account(std :: string name, double balance, double int_rate)
                : Savings_account{name, balance, int_rate}, count {0} {}

bool Trust_Account :: deposit(double amount)
{
    if(amount >= 5000)
        amount += 50;         // $50 bonus on depositing amount which is greater than $5000
    return Savings_account :: deposit(amount);    
}

bool Trust_Account :: withdraw(double amount)
{
    if (count < 3 && amount <= (balance * 20 / 100)) {
         this -> count++;
        return Savings_account :: withdraw(amount); 
    }
    else{
        return false;
    }   
}

void Trust_Account :: print(std :: ostream &os) const 
{
    
    Savings_account :: print(os);
    os << "  Current transaction number : " << this -> count << " Type : Trust Account]";
}
