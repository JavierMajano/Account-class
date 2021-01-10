// Account.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Account.h"
#include <string>

using namespace std;

Account::Account()
{
    Balance = 0; // sets the balance to 0
}
void Account::openAccount()
{
    while (name != " ") {
        cout << "An account already exist." << endl;
        return;
    }

    cout << "Enter your full name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter your address: ";

    cin.ignore();
    cin.getline(address, 100);


    cout << "How much money would you want to Deposit? ";
    cin >> Balance;
}
void Account::withdraw()
{
    float amount;
    cout << "How much money do you want to withdraw? ";
    cin >> amount;
    if (Balance - amount < 0)
    {
        cout << "You are withdrawing to much money \n ";
    }
    else
    {
        Balance = (Balance - amount);
        cout << "Total money left in account is: $" << Balance << endl;
    }


}

void Account::deposit()
{
    float amount;
    cout << "How much money do you want to deposit?: ";
    cin >> amount;
    Balance = (Balance + amount);
    cout << "The total money you have is: $" << Balance << endl;
}
void Account::bal() // return the balance
{
    cout << "your name: " << name << endl;

    cout << "your address: " << address << endl;

    cout << "deposit amount: $" << Balance << endl;
}
