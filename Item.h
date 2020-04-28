#ifndef Item_H
#define Item_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Item{
    protected:
        //Members:


        //used by account, class, and loan

        string ID_number; //this maybe private?

        float Balance;
        string bank_and_type;
        vector <float>* Transactions;
        //Question: should this be a pointer or will it be in user?



        //Methods:
    public:
        //Constructors

        //Default
        Item();

        Item(string ID_number, string bank_and_type, float balance);

        //Destructor
        ~Item();

        //Deposits or Expenses
        void Transaction(float amount);

        //reset Balances
        void setBalance(float balance);

        //Return members for viewing
        float getBalance();
        string getName(); //bank and type
        float* getTransactions();

};
#endif
