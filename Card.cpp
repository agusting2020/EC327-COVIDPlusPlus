#include<string>
#include <iostream>
#include "Item.h"
#include "Card.h"

using namespace std;

Card::Card(string ID_number, string bank_and_type, float balance, float credit, float statement_balance, string date){
    this->ID_number = ID_number;
    Balance = balance;
    this->bank_and_type = bank_and_type;
    pay_due_date = date;
    allotted_credit = credit;
    Statement_Balance = statement_balance;
}


void Card::setCardCredit(float credit){
    allotted_credit=credit;
}

void Card::setStatementBalance(float statement_balance){
    Statement_Balance = statement_balance;
}

//Next payment date
void Card::setDueDate(string date){
    pay_due_date = date;
}
string Card::getDueDate(){
    //check that the date has been set
    if (!pay_due_date.empty()){
        return pay_due_date;
    }else{
        cout<<"Please set due date for next payment"<<endl;
        return ""; //this is probably not best
    }
}
float Card::remaining_credit(){
    return allotted_credit-Balance;
}