#ifndef INVENTORY_H
#define INVENTORY_H
#include "Product.h"
#include <bits/stdc++.h> 

using namespace std;

class Inventory{
    private:
        std::map<int, Product> inventory;
        int items;
    public:
        Inventory();
        
}; 

#endif