#ifndef Account_H
#define Account_H

#include <string>
#include <iostream>
#include "Item.h"

class Account : public Item{
    public:
        //inherit item constructor
        using Item::Item;
    
        float Budget;
        float balance_when_budget_set;


        float Percentage_Budget_Used;

        void setBudget(float budget_amount); //also gets starting balance
        float getBudgetUsed(); //provides percentage




};
#endif