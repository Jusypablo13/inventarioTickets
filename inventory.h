#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class inventory{
    private:
        unordered_map<string, int> products;
    public:
        void addProduct(string name, int quantity);
        int getProduct(string name);
        bool removeProduct(string name);
};

#endif // INVENTORY_H