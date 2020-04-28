#include<string>
#include <iostream>
#include "card.h"
#include "account.h"
#include "user.h"
#include "transaction.h"
#include "loan.h"

using namespace std;

Card::Card(string name, unsigned int num, float total_credit, string date){
	card_name = name;
	card_number = num;
	credit_amount = total_credit;
	due_date = date;
	//Defaults
	statement_balance = 0.0;
	remaining_credit = credit_amount;
	credit_balance = 0.0;
}

//need to include resetting transaction array + num, when >50
void Card::addTransaction(Transaction *trns){
	num_Transactions = num_Transactions+1;
	*(Transactions+num_Transactions) = trns;
}

//manually set balance, also used in updating when making a transaction
void Card::setCurrentBalance(float balance){
	credit_balance = balance;
}

//manually set Statement balance
void Card::setStatementBalance(float balance){
	statement_balance = balance;
}

//Manually set payment dates
void Card::setDate(string date){
	due_date = date;
}

//get available credit
float Card::getRemaining(){
	remaining_credit = credit_amount - credit_balance;
}
