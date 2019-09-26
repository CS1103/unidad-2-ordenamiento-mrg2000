#include <iostream>
#include <fstream>
#include <sstream>
#include <istream>
#include <vector>
#include <regex>
#include "Definiciones.h"
#include "Record.h"
#include <sstream>
#include "Split.h"


vector <Record> VectorRecords(){
    ifstream datos;
    datos.open("info.csv",ios::in);


    TipoCadena linea;
    vector <Record> vectorRecords;

    Record record;
    while(getline(datos,linea)){
        auto valores = _explode(",",linea);
        record.setPais(valores[0]);
        record.setAno(stoi(valores[1]));
        record.setCodigo(stoi(valores[2]));
        record.setCommodity(valores[3]);
        record.setFlujo(valores[4]);

        record.setTrade(stoi(valores[5]));


        if(valores[6].empty())
            record.setPeso(0);
        else
            record.setPeso(stof(valores[6]));

        record.setSiNoCantidad(valores[7]);


        if(valores[8].empty())
            record.setCantidad(0);
        else
            record.setCantidad(stoi(valores[8]));

        record.setCategoria(valores[9]);

        vectorRecords.push_back(record);
    }

    return vectorRecords;
}
