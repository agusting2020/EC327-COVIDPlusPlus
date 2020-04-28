#include<string>
#include <iostream>
#include "Account.h"
#include "Transaction.h"
#include "Card.h"
#include "Loan.h"
#include "User.h"

using namespace std;

User::User(string name, int credit){
	this->name = name;
	this-> credit = credit;
}

void User::addAccount(int acct_num, string bank_name, string type,float balance){
	acct = Account(int acct_num, string bank_name, string type,float balance);
	num_accts=num_accts + 1;
	*(accounts+num_accts) = acct;
}

void User::addCard(string name,unsigned int num, float total_credit, string date){
	crd = Card(string name, unsigned int num, float total_credit, string date);
	num_cards = num_cards + 1;
	*(cards+num_cards) = crd;
}

void User::addLoan(string name, string type, float amount, string date){
	loan = Loan(string name, string type, float amount, string date);
	num_loans = num_loans + 1;
	*(loans+num_loans) = loan;
}

void User:: updateCredit(int new_credit){
	credit = new_credit;
}

Account User::getAccounts(){
	return *accounts;
}

Card User::getCards(){
	return *cards;
}

Loan User::getLoans(){
	return *loans;
}

int User::getCredit(){
	return credit;
}