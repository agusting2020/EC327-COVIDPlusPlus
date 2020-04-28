#ifndef Loan_H
#define Loan_H

#include <string>
#include <iostream>
#include "user.h"

using namespace std;

class Loan{
	friend class User;
	protected:
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
		Loan(string name, string type, float amount, string date);

		//manually change next payment date
		void setDate(string Date);
		//Update loan amount with new payment
		void MakePayment(float amount);

};
#endif
