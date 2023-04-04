#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <vector>
#include "entry.h"

class Account {
private:
    std::vector<Entry> income;
    std::vector<Entry> outcome;

public:
    double getBalance();
    bool addTransaction(const Entry& entry);
};

#endif
