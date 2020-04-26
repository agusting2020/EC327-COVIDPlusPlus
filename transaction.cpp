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
	float new_balance = acct.account_Balance + amount;
	acct.setBalance(new_balance);
	trans = this->Transaction;
	acct.addTransaction(*trans);
}

Transaction::Transaction(string type, float amount,Card *crd){
	Transaction_type = type;
	if Transaction_type == "Deposit"{
		Transaction_amount = amount;
	}else{
		Transaction_amount = -amount;
	}

	float new_balance = crd.credit_Balance + amount;
	crd.setBalance(new_balance);
	trans = this->Transaction;
	crd.addTransaction(*trans);
}