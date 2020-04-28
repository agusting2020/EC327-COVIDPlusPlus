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

void Loan::setDate(string date){
	due_date = date;
}

void Loan::MakePayment(Transaction *trans){
	num_payments = num_payments+1;
	*(payments+num_payments) = trans;
	
}