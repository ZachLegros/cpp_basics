#include "Inventory.h"
#include <iostream>
#include "Product.h"
#include <map> 

using namespace std;

Inventory::Inventory(){
    map<int, Product> inventory({});
    items = 0;
};

void Inventory::add(Product p){
    inventory.insert({items++, p});
};

void Inventory::remove(int i){
    inventory.erase(i);
};

void Inventory::toString(){
    for(unsigned i=0; i<items; i++){
        cout << inventory.at(i).name + "\n" << "price: " << inventory.at(i).price << " quantity: " << inventory.at(i).quantity;
    }
}