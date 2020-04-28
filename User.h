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

    vector <Account> Accounts ;
    vector <Loan> Loans ;
    vector <Card> Cards ;

    //Methods:

    //Constructor (credentials)
    User(const string username,const string password, int credit);

    //Deconstructor
    ~User();

    //Make an item
    void Add_Account(string ID_number, string bank_and_type, float balance);
    void Add_Loan(string ID_number, string bank_and_type, float balance, string date);
    void Add_Card(string ID_number, string bank_and_type, float balance, float credit, float statement_balance, string date);

    //set Credit
    void setCredit(int credit);
    //Display/Gets
    int getCredit();

    Account* getAccounts();
    Loan* getLoans();
    Card* getCards();

};
#endif