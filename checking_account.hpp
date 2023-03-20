#ifndef _CHECKING_ACCOUNT_HPP_
#define _CHECKING_ACCOUNT_HPP_
#include "Account.hpp"
#include<iostream>
#include<string>

class Checking_account final : public Account
{
private:
    static constexpr const char *def_name = "Un-named Checking Account";   // C++ 11
    static constexpr double def_balance = 0.0; 
    static constexpr double def_flat_fee = 1.50; 
public:
    Checking_account(std :: string name = def_name, double balance = def_balance);
    virtual bool withdraw(double amount) override;
    virtual bool deposit(double amount) override; 
    virtual void print(std :: ostream &os) const override; 
    virtual ~Checking_account() = default;   
};

#endif   // _CHECKING_ACCOUNT_HPP_