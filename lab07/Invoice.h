#ifndef INVOICE_H
#define INVOICE_H

#include <vector>
#include "Item.h"

class Invoice {
    public:
    void addItem(Item item);
    double getTotal() const;

    private:
    std::vector<Item> items;
};

#endif // INVOICE_H

