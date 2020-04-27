#ifndef Account_H
#define Account_H

#include <string>
#include <iostream>

using namespace std;

class User{
	
	private:
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
		User(string name);
		void addAccount(int acct_num, string bank_name, string type,float balance);
		void addCard(string name,unsigned int num, float total_credit, string date);
		void addLoan(string name, string type, float amount, string date);
		void updateCredit(int new_credit);
		*Account getAccounts();
		*Card getCards();
		*Loan getLoans();
		int getCredit();

};
#endif
		


