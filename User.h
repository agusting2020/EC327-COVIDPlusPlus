#ifndef User_H
#define User_H

#include <string>
#include <iostream>
#include <vector>
#include "Item.h"
#include "Account.h"
#include "Loan.h"
#include "Card.h"

using namespace std;

class User{
    protected:

    //Members:

    string username;
    string password;

    int credit_score;
    
    public:
    //Methods:

    //Constructor (credentials)
    User(const string username,const string password);

    //Deconstructor
    ~User();

    //Make an item
    Account Add_Account(string ID_number, string bank_and_type, float balance);
    Loan Add_Loan(string ID_number, string bank_and_type, float balance, string date);
    Card Add_Card(string ID_number, string bank_and_type, float balance, float credit, float statement_balance, string date);

    //Display
    int Show_Credit();
    



};
#endif