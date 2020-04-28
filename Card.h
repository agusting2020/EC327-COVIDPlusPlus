#ifndef Card_H
#define Card_H

#include <string>
#include <iostream>
#include "Item.h"

class Card : public Item{
    public:
        //inherit item constructor
        //using Item::Item;

        //Members:


        string pay_due_date;
        float allotted_credit; 
        float Statement_Balance; //either calcualted or collected



        //Methods:

        //Constructor
        Card();
        Card(string ID_number, string bank_and_type, float balance, float credit, float statement_balance, string date);

        //sets
        void setCardCredit(float credit);
        void setStatementBalance(float statement_balance);
        void setDueDate(string date);
        
        //gets

        string getDueDate();
        float remaining_credit();

};
#endif