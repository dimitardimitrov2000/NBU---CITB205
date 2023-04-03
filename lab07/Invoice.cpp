#include "Invoice.h"

void Invoice::addItem(Item item) {
    items.push_back(item);
}

double Invoice::getTotal() const {
    double total = 0;

    for (const auto& item : items){
        total += item.getTotal();
    }
    return total;
}