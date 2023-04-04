#include "wire.h"

WireTransfer::WireTransfer(double amount)
{
    this->amount = amount;
}

bool WireTransfer::transfer(Account& from, Account& to)
{
    Entry outcome(-amount);
    if (!from.addTransaction(outcome))
    {
        return false;
    }
    Entry income(amount);
    if (!to.addTransaction(income))
    {
        from.addTransaction(Entry(-outcome.getChange()));
        return false;
    }
    return true;
}