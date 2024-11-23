#include "inventory.h"
#include <iostream>
using namespace std;

int main() {
    inventory inv;

    string name = "apple";

    inv.addProduct(name, 10);
    inv.getProduct(name);
    return 0;
}