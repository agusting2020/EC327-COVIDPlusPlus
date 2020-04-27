#include<string>
#include <iostream>
#include "transaction.h"
#include "account.h"
#include "card.h"

using namespace std;

Transaction::Transaction(string type, float amount,Account *acct){
	Transaction_type = type;
	if Transaction_type == "Deposit"{
		Transaction_amount = amount;
	}else{
		Transaction_amount = -amount;
	}
	trans = this->Transaction;
	acct.addTransaction(*trans);
}

Expense::Expense(string type, float amount,Card *crd){
	Transaction_type = type;
	if Transaction_type == "Deposit"{
		Transaction_amount = amount;
	}else{
		Transaction_amount = -amount;
	}
	Transaction_amount = amount;
	trans = this->Transaction;
	crd.addTransaction(*trans);
}