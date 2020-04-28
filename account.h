#ifndef Account_H
#define Account_H

#include <string>
#include <iostream>
#include "transaction.h"
#include "user.h"

using namespace std;

class Account{

	friend class User;
	friend class Transaction;

	//Members
	protected:
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
		Account (int acct_num, string bank_name, string type,float balance);
		
		//Deconstructor
		~Account();
		//Set Balance
		friend void setBalance(float balance);
		//Need to include error for contructing account without balance?

		friend void addTransaction(Transaction *trans);
};
#endif

		
		


