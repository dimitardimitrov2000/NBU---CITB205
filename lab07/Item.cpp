#include "Item.h"

Item::Item(const Product& product, int quantity) : product(product), quantity(quantity) {}

double Item::getTotal() const {
    return product.getPrice() * quantity;
}