#include<string>
#include <iostream>
#include "account.h"
#include "transaction.h"
#include "user.h"

using namespace std;

Account::Account(User *usr,int acct_num, string bank_name, string type,float balance){
	account_number = acct_num;
	bank = bank_name;
	account_type = type;
	account_balance = balance;
	num_expenses=0;
	usr.num_accts=usr.num_accts + 1;
	//This might need to be a separate method addAcct that is called in constructor
	*(usr.accounts+usr.num_accts) = this->Account;

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
	num_Trans = num_Trans+1;
	*(Trans+num_Trans) = trns;
}



