#include<string>
#include <iostream>
#include "loan.h"
#include "user.h"

using namespace std;


Loan::Loan(string name, string type, float amount, string date){
		loan_name = name;
		loan_type = type;
		loan_amount = amount;
		due_date = date;
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