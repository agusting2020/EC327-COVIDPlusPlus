#include<string>
#include <iostream>
#include "Item.h"
#include "Account.h"

using namespace std;


Account::Account():Item(){
    ID_number="0000-0000-0000";//12 digit max per regulation (normally 8-12 digits)
    Balance = 0.0;
    bank_and_type= "NULL";
}

Account::Account(string ID_number, string bank_and_type, float balance){
    this->ID_number = ID_number;
    Balance = balance;
    this->bank_and_type = bank_and_type;
}

//setting a budget needs the amount
void Account::setBudget(float budget_amount){
    Budget = budget_amount;
    balance_when_budget_set=Balance; //gets original balance
}

//returns a float
float Account::getBudgetUsed(){
    float used_so_far = balance_when_budget_set-Balance; //Earlier balance - Current balance
    //Check for negative value
    if (used_so_far<0.0){
        Percentage_Budget_Used=0.0; //No budget used if current is more than it was earlier
    }else{
        Percentage_Budget_Used= used_so_far/Budget;
    }
    return Percentage_Budget_Used*100; //convert to percent
}