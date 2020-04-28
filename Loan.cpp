#include<string>
#include <iostream>
#include "Item.h"
#include "Loan.h"

using namespace std;

//Next payment date
Loan::Loan(string ID_number, string bank_and_type, float balance, string date){
    this->ID_number = ID_number;
    Balance = balance;
    this->bank_and_type = bank_and_type;
    pay_due_date = date;
}
void Loan::setDueDate(string date){
    pay_due_date = date;
}
string Loan::getDueDate(){
    //check that the date has been set
    if (!pay_due_date.empty()){
        return pay_due_date;
    }else{
        cout<<"Please set due date for next payment"<<endl;
        return ""; //this is probably not best
    }
}