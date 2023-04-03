#ifndef Item_H
#define Item_H

#include "Product.h"

class Item{
    public:
    Item(const Product& product, int quantity);
    double getTotal() const;

    private:
    Product product;
    int quantity;
};

#endif // ITEM_H
