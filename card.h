#ifndef Card_H
#define Card_H

#include <string>
#include <iostream>
#include "transaction.h"
#include "user.h"

using namespace std;

class Card{
	friend class User;
	friend class Transaction;

	protected:
	//Members

		//Bank + card name
		string card_name;
		unsigned int card_number;
		//credit allotted
		float credit_amount;

		//Current total amount due on credit card
		float credit_balance;
		//When the pay date is
		string due_date;
		//Amount due by pay date
		float statement_balance;
		//Amount remaining on card
		float remaining_credit;
		//Transactions
		//cut off 50
		Transaction *Transactions[50];
		int num_Transactions;

	//Methods

		//Constructor
		friend Card(string name, unsigned int num, float total_credit, string date);
		//Deconstructor
		~Card();

		//set methods

		friend void setDate(string date);
		friend void setCurrentBalance(float balance);
		friend void setStatementBalance(float balance);


		//Transaction methods
		friend void addTransaction();

		//get methods
		friend float getRemaining();

};
#endif