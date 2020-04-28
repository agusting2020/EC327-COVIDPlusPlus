#ifndef Loan_H
#define Loan_H

#include <string>
#include <iostream>
#include "account.h"
#include "transaction.h"
#include "card.h"


using namespace std;

class Loan{
	friend class User;
	friend class Transaction;
	friend class Card;
	friend class Account;
	protected:
		//Company/Bank
		string loan_name;
		//Personal or Student or 'Other'
		string loan_type;
		//Amount remaining
		float loan_amount;
		//next due payment
		string due_date;

		//Array of Payments associated with account
		//cut off 50
		Transaction *payments[50];
		int num_payments; //for parsing

		//Constructor
		Loan(string name, string type, float amount, string date);

		//manually change next payment date
		void setDate(string Date);
		//Update loan amount with new payment
		void MakePayment(Transaction *trans);

};
#endif
