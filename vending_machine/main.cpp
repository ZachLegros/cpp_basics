#include <iostream>
#include <string>
#include "Inventory.h"
#include "Product.h"

using namespace std;

int main(){
    Product p1, p2;
    p1.price = 5.00;
    p1.id = 1;
    p1.name = "cookie";
    p1.quantity = 4;
   
    p2.price = 2.50;
    p2.id = 2;
    p2.name = "chips";
    p2.quantity = 3;

    Inventory inv;
    inv.add(p1);
    inv.add(p2);
    inv.toString();

    inv.sell(0);
    inv.sell(1);
    inv.toString();
    
    return 0;
}