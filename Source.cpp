#include<iostream>
#include "Account.h"

using namespace std;



int main()
{
    int input;
    string x;
    Account a1;
    do {

        cout << "1. open account" << endl;;
        cout << "2. Deposit Money" << endl;;
        cout << "3. Withdraw money" << endl;;
        cout << "4. display account" << endl;;
        cout << "5. Exit" << endl;
        cout << "Please select an option from 1-5 " << endl;
        cin >> input;
        switch (input)
        {
        case 1:
        {
            cout << "Creating an account" << endl;
            a1.openAccount();
            break;
        }
        case 2:
        {
            cout << "Depoist Money" << endl;
            a1.deposit();
            break;
        }
        case 3:
        {
            cout << "Withdrawing money..." << endl;
            a1.withdraw();
            break;
        }
        case 4:
        {
            cout << "Displaying account..." << endl;
            a1.bal();
            break;
        }
        case 5:
        {
            if (input == 5)
            {
                exit(1);
            }
        }
        default:
            cout << "Not exit try again " << endl;
        }

        cout << "Please select the next option then press y/n " << endl;
        cin >> x;
        if (x == "n" || x == "N")
        {
            exit(0);
        }


    } while (x == "y");

    return 0;
}