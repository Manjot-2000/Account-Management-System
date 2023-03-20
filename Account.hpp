#ifndef _ACCOUNT_HPP_
#define _ACCOUNT_HPP_
#include<string>
#include<iostream>
#include "I_Printable.hpp"
using std :: string;

class Account : public I_Printable
{
private:
    static constexpr const char *def_name = "Un-named Account";   // C++ 11
    static constexpr double def_balance = 0.0; 
protected:
    std :: string name;
    double balance;
public:
    Account(std :: string set_name = def_name, double set_balance = def_balance);
    virtual ~Account() = default;
    virtual bool deposit(double amount) = 0;     
    virtual bool withdraw(double amount) = 0;
    virtual void print(std :: ostream &os) const override;
};

#endif     //_ACCOUNT_HPP_