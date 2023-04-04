#ifndef ENTRY_H
#define ENTRY_H

class Entry {
private:
    double change;

public:
    Entry(double change);
    double getChange();
    bool canTakePlace(double balance);
};

#endif


 