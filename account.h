#ifndef Account_H
#define Account_H

#include <string>
#include <iostream>
#include "Transaction.h"
#include "User.h"

using namespace std;

class Account{

	friend class User;
	friend class Transaction;

	//Members
	protected:
		//Might need to change this to a class, depending on if this is just for display like xxxx-last 4 digits, or if it's neeeded for identification with plaid
		int account_number;
		//Bank name
		string bank;
		//Checkings or Savings
		string account_type;
		//Balance
		float account_balance;
		
		//Array of Transactions associated with account
		//cut off 50
		Transaction *transactions[50];
		int num_trans; //for parsing


	//Methods

		//Constructor
		Account (User *usr,int acct_num, string bank_name, string type,float balance);
		
		//Deconstructor
		~Account();
		//Set Balance
		void setBalance(float balance);
		//Need to include error for contructing account without balance?

		void addTransaction(Transaction *trans);
};
#endif

		
		


