#include "entry.h"

Entry::Entry(double change) 
{
    this->change = change;
}

double Entry::getChange() 
{
    return change;
}

bool Entry::canTakePlace(double balance) 
{
    if (change < 0 && balance < -change) 
    {
        return false;
    }
    return true;
}
