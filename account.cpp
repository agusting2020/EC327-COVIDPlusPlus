#include<string>
#include <iostream>
#include "account.h"
#include "user.h"
#include "transaction.h"
#include "card.h"
#include "loan.h"

using namespace std;

Account::Account(int acct_num, string bank_name, string type,float balance){
	account_number = acct_num;
	bank = bank_name;
	account_type = type;
	account_balance = balance;
	num_trans=0;


}

void Account::setBalance(float balance){
	account_balance = balance;
}

//need to include resetting transaction array + num, when >50
void Account::addTransaction(Transaction *trns){
	num_trans = num_trans+1;
	*(transactions+num_trans) = trns;
}



