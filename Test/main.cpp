#include <iostream>
#include "account.h"
#include "entry.h"
#include "wire.h"
using namespace std;

int main()
{
    Account account1;
    Account account2;

    Entry income(100);
    account1.addTransaction(income);

    cout << "Account1 balance: " << account1.getBalance() << endl;
    cout << "Account2 balance: " << account2.getBalance() << endl;

    WireTransfer successfulTransfer(50);
    if (successfulTransfer.transfer(account1, account2))
    {
        cout << "Transfer successful" << endl;
    }

    else
    {
        cout << "Transfer failed" << endl;
    }

    cout << "Account1 balance: " << account1.getBalance() << endl;
    cout << "Account2 balance: " << account2.getBalance() << endl;

    WireTransfer unsuccessfulTransfer(200);
    if(unsuccessfulTransfer.transfer(account1, account2))
    {
        cout << "Transfer successful" << endl;
    }
    else
    {
        cout << "Transfer failed" << endl;
    }
    cout << "Account1 balance: " << account1.getBalance() << endl;
    cout << "Account2 balance: " << account2.getBalance() << endl;

    return 0;

}