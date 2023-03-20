#ifndef _UTIL_FUN_HPP_
#define _UTIL_FUN_HPP_

#include "Account.hpp"
#include<vector>

// Account objects
void display(const std :: vector<Account *> &accounts);
void deposit(std :: vector<Account *> &accounts, double amount);
void withdraw(std :: vector<Account *> &accounts, double amount);
void farewell_message();
void set_parameters();

#endif   // _UTIL_FUN_HPP_