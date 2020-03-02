#ifndef INVENTORY_H
#define INVENTORY_H
#include "Product.h"
#include<map>

using namespace std;

class Inventory{
    private:
        std::map<int, Product> inventory;
        int items;
    public:
        Inventory();
        void add(Product);
        void sell(int);
        void toString();
        
}; 

#endif