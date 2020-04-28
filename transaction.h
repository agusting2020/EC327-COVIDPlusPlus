#ifndef Transaction_H
#define Transaction_H

#include <string>
#include <iostream>
#include "account.h"
#include "card.h"

using namespace std;

class Transaction{

	friend class Account;
	friend class Card;

	protected:
		//expense or deposit
		string transaction_type;
		//Actual amount of expense
		float transaction_amount;

		//Contructor
		//For accounts and cards
		friend Transaction(string type, float amount,Account *acct);
		friend Transaction(string type, float amount,Card *crd);
};
#endif
