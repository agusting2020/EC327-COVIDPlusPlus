#include<string>
#include <iostream>
#include "loan.h"
#include "user.h"

using namespace std;


Loan::Loan(User *usr,string name, string type, float amount, string date){
		loan_name = name;
		loan_type = type;
		loan_amount = amount;
		due_date = date;
		usr.num_loans = usr.num_loans + 1;
		*(usr.loans+usr.num_loans) = this->loan;
}
Loan::~Loan(){
	delete Loan;
}
void Loan::setDate(string date){
	due_date = date;
}

void Loan::MakePayment(float amount){
	loan_amount = loan_amount - amount;
}