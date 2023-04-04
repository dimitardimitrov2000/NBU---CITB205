#include "account.h"

double Account::getBalance()
{
    double balance = 0;

    for (const Entry& entry : income)
    {
        balance += entry.getChange();
    }
    for (const Entry& entry : outcome)
    {
        balance -= entry.getChange();
    }
    return balance;
    
}

bool Account::addTransaction(const Entry& entry)
{
    if (entry.getChange() < 0 && getBalance() < -entry.getChange())
    {
        return false;
    }
    if (entry.getChange() >= 0)
    {
        income.push_back(entry);
    }
    else
    {
        outcome.push_back(entry);
    }
    return true;
    
}