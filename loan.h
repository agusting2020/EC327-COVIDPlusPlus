#ifndef Loan_H
#define Loan_H

#include <string>
#include <iostream>
#include "User.h"

using namespace std;

class Loan{
	friend class User;
	private:
		//Company/Bank
		string loan_name;
		//Personal or Student or 'Other'
		string loan_type;
		//Amount remaining
		float loan_amount;
		//next due payment
		string due_date;
		//payment
		float payment;

		//Constructor
		Loan(User *usr,string name, string type, float amount, string date);
		//Deconstructor
		~Loan();

		//manually change next payment date
		void setDate();
		//Update loan amount with new payment
		void MakePayment(float amount);

};
#endif
