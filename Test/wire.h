#ifndef WIRE_H
#define WIRE_H

#include "account.h"

class WireTransfer
{
    private:
    double amount;

    public:
    WireTransfer(double amount);
    bool transfer(Account& from, Account& to);
};


#endif