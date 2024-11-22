#include "inventory.h"

void inventory::addProduct(string name, int quantity) {
    products[name] += quantity;
}

int inventory::getProduct(string name) {
    auto id = products.find(name); //Encontrar el producto con el nombre dado
    //Si lo encuentra, devuelve el first y second del iterador
    //Second es la cantidad de productos
    if(id != products.end()){
        return id->second; //Devolver la cantidad de productos
    }
    return -1;
    
}

bool inventory::removeProduct(string name) {
    return products.erase(name) > 0; //Borrar el producto con el nombre dado
}