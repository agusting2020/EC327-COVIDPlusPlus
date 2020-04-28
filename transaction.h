#ifndef Transaction_H
#define Transaction_H

#include <string>
#include <iostream>
#include "account.h"
#include "card.h"
#include "loan.h"

using namespace std;

class Transaction{

	friend class Account;
	friend class Card;
	friend class Loan;

	protected:

		//Members:

		//deposit or expense (defines if it's a postive or negative number when updating balances)
		string transaction_type;
		//Dollllarrrss
		float transaction_amount;


		//Methods:

		//Three kinds of transactions (constructors)

		//deposit or expense to account
		Transaction(string type, float amount,Account *acct);

		//deposit or expense on card
		Transaction(string type, float amount,Card *crd);

		//payment on loan
		Transaction(float amount, Loan *loan);
};
#endif
