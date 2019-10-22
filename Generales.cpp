//
// Created by chuse on 3/10/2019.
//


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
#include "Generales.h"


vector <Record> VectorRecords(){
    fstream datos;
    AbreArchivo("info.csv",datos,ios::in);

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



void AbreArchivo(TipoCadena nombreFisico, std::fstream &archivo, ios_base::openmode modo)
{//-------------------------------------------------------------------------------------
    archivo.open(nombreFisico,modo);
    if(!archivo.is_open())
    {
        cout << "Error no se puedo abrir el archivo";
        exit(EXIT_FAILURE);
    }
}



ostream &operator<<(ostream& os, vector <Record> vec){

    os << "Pais,"<< "Ano,"<< "Codigo,"<< "Commodity,"<< "Flujo,"<< "Trade,"<< "Peso,"<< "SioNoCantidad,"<< "Cantidad,"<< "Categoria" << endl;
    for(TipoEntero i=0;i<vec.size();i++){
        os << vec[i].getPais() << "," << vec[i].getAno() << "," << vec[i].getCodigo() << "," << vec[i].getCommodity() << "," << vec[i].getFlujo() << "," << vec[i].getTrade() << "," << vec[i].getPeso() << "," << vec[i].isSiNoCantidad() << "," << vec[i].getCantidad() << "," << vec[i].getCategoria() << "\n";
    }
    return os;
}

