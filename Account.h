#pragma once

using namespace std;

class Account
{
    
    public:
        Account();
        void openAccount();
        void deposit();
        void withdraw();
        void bal();

    private:

        double Balance;
        string name = " ";
        char address[100];

    
};

