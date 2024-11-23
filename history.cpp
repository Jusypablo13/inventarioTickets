#include "history.h"

void history::addRecord(const string& record){
    records.push_back(record); //Agregar el registro a la lista
}

void history::showHistory(){
    cout << "Historial de registros" << endl;

    for(auto& record:records){
        cout << record << endl; //Mostrar cada registro
    }
}