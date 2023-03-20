#ifndef _SAVINGS_ACCOUNT_HPP_
#define _SAVINGS_ACCOUNT_HPP_
#include "Account.hpp"

class Savings_account : public Account    // Saving account inherit Account
{
private:
    static constexpr const char *def_name = "Un Named savings account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
protected : 
    double interest_rate;
public:
    Savings_account(std :: string set_name = def_name,double set_balance = def_balance, double set_int_rate = def_int_rate);
    virtual ~Savings_account() = default;
    virtual bool deposit(double amount);
    virtual bool withdraw(double amount) override;          // Already inherited from the parent
    virtual void print(std :: ostream &os) const override;
};

#endif       //_SAVINGS_ACCOUNT_HPP_