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

void Inventory::sell(int i){
    if (inventory.at(i).quantity > 0) {
        inventory.at(i).quantity--;
        cout << "You just bought: " << inventory.at(i).name << " for " << inventory.at(i).price << "$ \n";
    } 
};

void Inventory::toString(){
    cout << "Inventory: \n";
    for(unsigned i=0; i<items; i++){
        cout << inventory.at(i).name + "\n" << "price: " << inventory.at(i).price << ", quantity: " << inventory.at(i).quantity << "\n";
    }
}