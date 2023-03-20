#include "Savings_account.hpp"
#include "Util_fun.hpp"
#include "checking_account.hpp"
#include "Trust_Account.hpp"
#include<iostream>
#include<vector>
#include<memory>

using std :: cout , std :: endl, std :: vector;
int main() 
{
    set_parameters();
    std :: unique_ptr<Account> ptr {std :: make_unique<Checking_account> ("Ramos", 2000)};
    std :: unique_ptr<Account> ptr1 {std :: make_unique<Trust_Account> ("Forvitos", 10000, 15)};
    std :: unique_ptr<Account> ptr2 {std :: make_unique<Savings_account> ("Fraxture", 5000, 10)};

    vector<std :: unique_ptr<Account>> accounts;
    accounts.push_back(std :: make_unique<Checking_account> ("Ramos", 2000));
    accounts.push_back(std :: make_unique<Trust_Account> ("Forvitos", 10000, 15));
    accounts.push_back(std :: move(ptr));

    for (const auto &i : accounts) {
        (*i).deposit(1000);
        cout << *i << endl;
    }
    
    farewell_message();
    return 0;
}



