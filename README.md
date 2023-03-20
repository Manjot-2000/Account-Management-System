# Account-Management-System
* The Account Management System is a simulation of how real-world banking applications work. It caters to three types of accounts: Trust, Checkings, and Savings. Each     special account is a type of account, and the basic functionality of an account is inherited by every special class of account, including withdraw and deposit.

* In Checkings account, there is a special case for withdrawal where a flat fee is defined that is applicable to every transaction that happens for this account type.     For example, if a person wants to withdraw $50, they will be charged with a flat fee of $1.50.

* In Savings account, there is a special business logic for depositing an amount. An additional field of interest rate is added that the bank can set, and it will be       added to the amount to be deposited. For example, if a person wants to deposit $100 and the interest rate is set to 2%, then the total amount that will be deposited in   this account will be $100 + 2% of $100.

Trust account has five special behaviors. 
* First, it is a type of savings account. 
* Second, if the user deposits money greater than or equal to $5000, they get a $50 bonus. 
* Third, the user can withdraw a maximum of three times from their account. 
* Fourth, the withdrawal amount should be less than 20% of the current balance. 
* Fifth, if this condition fails, then the transaction is said to be failed.

The Account Management System also provides utility functions to work with a collection of accounts of different types.
