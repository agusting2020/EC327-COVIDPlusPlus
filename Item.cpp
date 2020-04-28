#include<string>
#include <iostream>
#include "Item.h"

using namespace std;

Item::Item(){
    ID_number="0000-0000-0000";//12 digit max per regulation (normally 8-12 digits)
    Balance = 0.0;
    bank_and_type= "NULL";

}

Item::Item(string ID_number,string bank_and_type, float balance){
    this->ID_number = ID_number;
    Balance = balance;
    this->bank_and_type = bank_and_type;
}

Item::~Item(){
    delete this; //Final deconstructor
}
void Item::Transaction(float amount){
    Balance = Balance + amount; //amount must be signed already

    //checks for vector size before assigning new transaction
    if (Transactions.size() == 20){ //previously *Transaction
        Transactions.clear(); //This clears if transactions >20, but
                             //We may want to switch elements around instead of clearing for slicker UI
    }
    Transactions.push_back(amount);
}

void Item::setBalance(float new_balance){
    Balance = new_balance; //lik da shoe
}

 float* Item::getTransactions(){
     static float Transaction_Array[20];
     for (int i = 0; i<20; i++){
         Transaction_Array[i] = Transactions.at(i);
     }
    return (Transaction_Array);
}
