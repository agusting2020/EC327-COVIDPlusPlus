#include<string>
#include <iostream>
#include "transaction.h"
#include "account.h"
#include "card.h"

using namespace std;

Transaction::Transaction(string type, float amount,Account *acct){
	transaction_type = type;
	if (transaction_type == "Deposit"){
		transaction_amount = amount;
	}else{
		transaction_amount = -amount;
	}
	float new_balance = acct->account_balance + amount;
	acct->setBalance(new_balance);
	acct->addTransaction(*this);
}

Transaction::Transaction(string type, float amount,Card *crd){
	transaction_type = type;
	if (transaction_type == "Deposit"){
		transaction_amount = amount;
	}else{
		transaction_amount = -amount;
	}

	float new_balance = crd->credit_balance + amount;
	crd->setCurrentBalance(new_balance);
	crd->addTransaction(*this);
}