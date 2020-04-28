#ifndef User_H
#define User_H

#include <string>
#include <iostream>
#include "account.h"
#include "transaction.h"
#include "card.h"
#include "loan.h"

using namespace std;

class User{
	friend class Account;
	friend class Card;
	friend class Loan;
	friend class Transaction;
	
	protected:
		//still have to work on budget
		float budget;
		Account *accounts[8]; //Only 8 allowed
		Card *cards[4]; //Only 4 allowed
		Loan *loans[8]; //8 all
		int credit;
		int num_accts;
		int num_cards;
		int num_loans;
		string name;


		//Constructor user's name only required
		User(string name);

		//Making new accounts, cards and loans

		//Account number + Bank name + Type (checkings, savings etc.), + account balance
		void addAccount(int acct_num, string bank_name, string type,float balance);

		//Card Name (Chase Saphire, BOFA wtv) + card number + associated card credit + payment date (Idk if i need the date here)
		void addCard(string name,unsigned int num, float total_credit, string date);

		//Loan Name (this might just be the bank or company) + type (personal or student) + amount (current amount left to pay off) + date for next loan payment
		void addLoan(string name, string type, float amount, string date);

		//Updating credit score
		void updateCredit(int new_credit);


		//Gets
		Account* getAccounts();
		Card* getCards();
		Loan* getLoans();
		int getCredit();

};
#endif
		


