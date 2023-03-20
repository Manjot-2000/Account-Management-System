#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H
#include "Savings_Account.hpp"
class Trust_Account final : public Savings_account
{
protected:
    int count;
private:
    static constexpr const char *def_name = "Un Named Trust account";
    static constexpr double def_balance = 0.0;
    static constexpr int def_int_rate = 0.0;
public:
    Trust_Account(std :: string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override; 
    virtual ~Trust_Account() = default; 
    virtual void print(std :: ostream &os) const override;  
};

#endif     // TRUST_ACCOUNT_H