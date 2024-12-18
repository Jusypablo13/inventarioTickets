#include "inventory.h"
#include "history.h"
#include <iostream>
using namespace std;

int main() {
    inventory inv;
    history hist;

    string name;
    int cantidad;

    int choice;
    do{
        cout << "Inventario Onichan 2024" << endl;
        cout << "1. Agregar producto" << endl;
        cout << "2. Buscar producto" << endl;
        cout << "3. Eliminar producto" << endl;
        cout << "4. Mostrar historial" << endl;
        cout << "5. Salir" << endl;
        cout << "Elige una opción: " << endl;
        cin >> choice;
        
        switch (choice){
        case 1:
            cout << "Ingresa el nombre del producto: ";
            cin >> name;
            cout << "Ingresa la cantidad del producto: ";
            cin >> cantidad;
            inv.addProduct(name, cantidad);
            break;
        
        case 2:
            cout << "Ingresa el nombre del producto: ";
            cin >> name;
            cantidad = inv.getProduct(name);
            if(cantidad != -1){
                cout << "El producto " << name << " tiene " << cantidad << " unidades" << endl;
            } else {
                cout << "El producto " << name << " no se encuentra en el inventario" << endl;
            }
            break;

        case 3:
            cout << "Ingresa el nombre del producto: ";
            cin >> name;
            if(inv.removeProduct(name)){
                cout << "El producto " << name << " ha sido eliminado" << endl;
            } else {
                cout << "El producto " << name << " no se encuentra en el inventario" << endl;
            }
            break;
        
        case 4:
            hist.showHistory();
            break;

        case 5:
            cout << "Saliendo del inventario" << endl;
            break;
        
        default:
            cout << "Opción no válida" << endl;
            break;
        }
    } while(choice != 5);

    return 0;
}