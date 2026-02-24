#include<iostream>
using namespace std;

class BankAccount
{
private:
    float balance;   

public:
    // Constructor
    BankAccount(float initialBalance)
    {
        balance = initialBalance;
    }

    void deposit(float amount)
    {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(float amount)
    {
        if(amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void displayBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount acc(1000);  // Object created with initial balance

    
    acc.deposit(500);
    acc.withdraw(300);
    acc.withdraw(1500);

    acc.displayBalance();

    return 0;
}