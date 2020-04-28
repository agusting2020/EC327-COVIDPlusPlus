#include<string>
#include <iostream>
#include "Account.h"
#include "Transaction.h"
#include "User.h"

using namespace std;

Account::Account(int acct_num, string bank_name, string type,float balance){
	account_number = acct_num;
	bank = bank_name;
	account_type = type;
	account_balance = balance;
	num_expenses=0;


}
Account::~Account(){
	string user_input;
	//Idk if this belongs here or if this is a UI thing
	cout<<"Are you sure you want to delete this account?"<<endl<<"[Y/N]"<<endl;
	cin>>user_input;
	if (user_input == "Y"){
		delete Account;
	}
}

void Account::setBalance(float balance){
	account_balance = balance;
}

//need to include resetting transaction array + num, when >50
void Account::addTransaction(Transaction *trns){
	num_trans = num_trans+1;
	*(transactions+num_trans) = trns;
}



