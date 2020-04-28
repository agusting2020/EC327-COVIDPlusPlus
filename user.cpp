#include<string>
#include <iostream>
#include "user.h"
#include "account.h"
#include "transaction.h"
#include "card.h"
#include "loan.h"

using namespace std;

User::User(string user_name){
	name = user_name;
}

void User::addAccount(int acct_num, string bank_name, string type,float balance){
	Account acct = Account(acct_num, bank_name,type, balance);
	num_accts=num_accts + 1;
	*(accounts+num_accts) = &acct;
}

void User::addCard(string name,unsigned int num, float total_credit, string date){
	Card crd = Card(name, num, total_credit,date);
	num_cards = num_cards + 1;
	*(cards+num_cards) = &crd;
}

void User::addLoan(string name, string type, float amount, string date){
	Loan loan = Loan(name, type, amount,date);
	num_loans = num_loans + 1;
	*(loans+num_loans) = &loan;
}

void User::updateCredit(int new_credit){
	credit = new_credit;
}

Account* User::getAccounts(){  
	return *accounts;
}

Card* User::getCards(){
	return *cards;
}

Loan* User::getLoans(){
	return *loans;
}

int User::getCredit(){
	return credit;
}