#include<string>
#include <iostream>
#include "card.h"
#include "user.h"
#include "transaction.h"

using namespace std;

Card::Card(string name, User *usr, unsigned int num, float total_credit, string date){
	card_name = name;
	card_number = num;
	credit_amount = total_credit;
	due_date = date;
	//Defaults
	statement_balance = 0.0;
	remaining_credit = credit_amount;
	credit_balance = 0.0;
	usr.num_cards = usr.num_cards + 1;
	*(usr.cards+usr.num_cards) = this->Card;
}

Card::~Card(){
	delete Card;
}

//need to include resetting transaction array + num, when >50
void Card::addTransaction(Transaction *trns){
	num_Trans = num_Trans+1;
	*(Trans+num_Trans) = trns;
}

//manually set balance, also used in updating when making a transaction
void Card::setCurrentBalance(float balance){
	this->credit_balance = balance;
}

//manually set Statement balance
void setStatementBalance(float balance){
	this -> statement_balance = balance;
}

//Manually set payment dates
void Card::setDate(string date){
	this->due_date = date;
}

//get available credit
float Card::getRemaining(){
	this -> remaining_credit = credit_amount - credit_balance;
}