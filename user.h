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

		//Methods
		//gets:
		Account getAccounts();
		Card getCards();
		Loan getLoans();
};
#endif
		


