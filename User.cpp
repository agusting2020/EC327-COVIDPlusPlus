#include<string>
#include <iostream>
#include <vector>
#include "User.h"
#include "Item.h"
#include "Account.h"
#include "Loan.h"
#include "Card.h"


using namespace std;

User::User(const string username,const string password, int credit){
    this->username = username;
    this-> password = password;
    credit_score = credit;
}

User::~User(){
    delete this; //Final deconstructor
}


void User::Add_Account(string ID_number, string bank_and_type, float balance){
    Account new_acct = Account(ID_number,bank_and_type,balance);
    if (Accounts.size() == 4){ 
        Accounts.clear(); 
    }
    Accounts.push_back(new_acct);
}

void User::Add_Loan(string ID_number, string bank_and_type, float balance, string date){
    Loan new_loan = Loan(ID_number,bank_and_type,balance);
    if (Loans.size() == 8){ 
        Loans.clear(); 
    }
    Loans.push_back(new_loan);
}

void User::Add_Card(string ID_number, string bank_and_type, float balance, float credit, float statement_balance, string date){
    Card new_card = Card(ID_number,bank_and_type,balance);
    if (Cards.size() == 4){ 
        Cards.clear(); 
    }
    Cards.push_back(new_card);
}

void User::setCredit(int credit){
    credit_score=credit;
}

Account* User::getAccounts(){
     static Account *Accounts_Array = new Account[4];
     for (int i = 0; i<20; i++){
         Accounts_Array[i] = Accounts.at(i);
     }
    return (Accounts_Array);
}

Loan* User::getLoans(){
     static Loan *Loans_Array = new Loan[8];
     for (int i = 0; i<20; i++){
         Loans_Array[i] = Loans.at(i);
     }
    return (Loans_Array);
}

Card* User::getCards(){
     static Card *Cards_Array = new Card[4];
     for (int i = 0; i<20; i++){
         Cards_Array[i] = Cards.at(i);
     }
    return (Cards_Array);
}

int User::getCredit(){
    return credit_score;
}
