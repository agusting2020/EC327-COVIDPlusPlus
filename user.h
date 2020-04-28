#ifndef Account_H
#define Account_H

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
	
	protected:
		//maybe budget should be it's own class if there's one for each account? 
		float budget;
		Account *accounts[8]; //Only 8 allowed
		Card *cards[4]; //Only 4 allowed
		Loan *loans[8]; //8 all
		int credit;
		int num_accts;
		int num_cards;
		int num_loans;
		string name;


		//Methods
		friend User(string name);
		friend void addAccount(int acct_num, string bank_name, string type,float balance);
		friend void addCard(string name,unsigned int num, float total_credit, string date);
		friend void addLoan(string name, string type, float amount, string date);
		friend void updateCredit(int new_credit);
		friend Account getAccounts();
		friend Card getCards();
		friend Loan getLoans();
		friend int getCredit();

};
#endif
		


