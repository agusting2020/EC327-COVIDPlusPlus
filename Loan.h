#ifndef Loan_H
#define Loan_H

#include <string>
#include <iostream>
#include "Item.h"

class Loan : public Item{
    public:
        //inherit item constructor
        using Item::Item;

        //Members:

        string pay_due_date;

        //Methods:
        //Constructor using due date parameter
        Loan(string ID_number, string bank_and_type, float balance, string date);
        
        void setDueDate(string date);
        string getDueDate();



};
#endif
