#include<string>
#include <iostream>
#include "account.h"
#include "transaction.h"
#include "card.h"
#include "loan.h"
#include "user.h"

using namespace std;

User::User(string name, int credit){
	this->name = name;
	this-> credit = credit;
}

void User::addAccount(int acct_num, string bank_name, string type,float balance){
	acct = Account(*this,int acct_num, string bank_name, string type,float balance);
}

void User::addCard(string name,unsigned int num, float total_credit, string date){
	crd = Card(string name, *this, unsigned int num, float total_credit, string date);
}

void User::addLoan(string name, string type, float amount, string date){
	loan = Loan(*this,string name, string type, float amount, string date);
}

void User:: updateCredit(int new_credit){
	credit = new_credit;
}

*Account User::getAccounts(){
	return *Accounts;
}

*Card User::getCards(){
	return *Cards;
}

*Loan User::getLoans(){
	return *Loans;
}

int User::getCredit(){
	return credit;
}