#include "Account.hpp"
Account :: Account(std :: string set_name, double set_balance)
         :  name{set_name}, balance{set_balance}{
}

bool Account :: withdraw(double amount)
{
    if (this -> balance - amount >= 0) {
        this -> balance -= amount;
        std :: cout << "\n*********** Transaction successful ***********\n" << std :: endl;
        return true;
    }
    else{
        std :: cout << "\n*********** Transaction Failed ***********\n" << std :: endl;
        return false;   
    } 
}

bool Account :: deposit(double amount) 
{
    if (amount <= 0)
        return false;
    else  {    
    balance += amount;
    return true;
    }
}

void Account :: print(std :: ostream &os) const {
    os << "[Name : " << this -> name << "  Balance : " << this -> balance;
}