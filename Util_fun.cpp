#include "Util_fun.hpp"
#include<iostream>
#include<iomanip>
using std :: cout , std :: endl;

void display(const std :: vector<Account *> &accounts)
{
    if(accounts.size() == 0)
        cout << "There are no accounts to display " << endl;
    else {        
    cout << "\n**************** Displaying the Accounts Collection ****************\n";
    for (const auto &acc : accounts){
        cout << *acc << endl;
        } 
    }
}

void deposit(std :: vector<Account *> &accounts, double amount)
{
    cout << "\n**************** Trying to Deposit in the Accounts Collection ****************\n";
    for (auto &i : accounts)
    {
        if((*i).deposit(amount) == false)
            cout << " Failed to deposit the amount of " << amount << endl; 
        else
            cout << "Deposting " << amount << " to " << *i << endl;    
    }
}

void withdraw(std :: vector<Account *> &accounts, double amount)
{
    cout << "\n**************** Trying to withdraw in Accounts Collections ****************\n";
    for (auto &i : accounts)
    {
        if((*i).withdraw(amount))
            cout << "Successfuly withdrew " << amount << " from " << *i << endl;
        else
            cout << "Failed to Withdrew " << amount << " from " << *i <<  endl;    
    }
}

void farewell_message() {
    cout << "\n\n********************************** Thanks for choosing our bank **********************************\n\n" << endl;
}

void set_parameters() {
    cout << std :: setprecision(2) << std :: fixed;
}
