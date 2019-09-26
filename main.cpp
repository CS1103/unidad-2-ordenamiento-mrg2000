#include <iostream>
#include "Definiciones.h"
#include "Split.h"
#include "Record.h"

using namespace std;


vector <Record> VectorRecords();


int main() {



    vector <Record> records = VectorRecords();
    for(int i=400;i<500;i++) {
        cout << records[i].getAno() << "--";
        cout << records[i].getCodigo() << "--";
        cout << records[i].getTrade() << "--";
        cout << records[i].getCantidad() << endl;
    }









    return 0;
}