#include <iostream>
#include "Invoice.h"
#include "Product.h"
#include "Item.h"

int main()
{
    Product apple("apple", 2.90);
    Product banana("banana", 1.65);

    Item item1(apple, 2);
    Item item2(banana, 3);

    Invoice invoice;
    invoice.addItem(item1);
    invoice.addItem(item2);

    std::cout << "Total: " << invoice.getTotal() << std::endl;

    return 0; 

}