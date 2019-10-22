//
// Created by chuse on 3/10/2019.
//

#ifndef PROYECTO2FINAL_RECORD_H
#define PROYECTO2FINAL_RECORD_H


#include "Definiciones.h"


class Record {
private:
    TipoCadena pais;
    TipoEntero ano;
    TipoEntero codigo;
    TipoCadena commodity;
    TipoCadena flujo;
    TipoEntero trade;
    TipoNumerico peso;
    TipoCadena siNoCantidad;
    TipoEntero cantidad;
    TipoCadena categoria;

public:

    Record();

    //Getters
    const TipoCadena &getPais() const;
    TipoEntero getAno() const;
    TipoEntero getCodigo() const;
    const TipoCadena &getCommodity() const;
    const TipoCadena &getFlujo() const;
    TipoEntero getTrade() const;
    TipoNumerico getPeso() const;
    TipoCadena isSiNoCantidad() const;
    TipoEntero getCantidad() const;
    const TipoCadena &getCategoria() const;


    //Setters
    void setPais(const TipoCadena &pais);
    void setAno(TipoEntero ano);
    void setCodigo(TipoEntero codigo);
    void setCommodity(const TipoCadena &commodity);
    void setFlujo(const TipoCadena &flujo);
    void setTrade(TipoEntero trade);
    void setPeso(TipoNumerico peso);
    void setSiNoCantidad(TipoCadena siNoCantidad);
    void setCantidad(TipoEntero cantidad);
    void setCategoria(const TipoCadena &categoria);


};


#endif //PROYECTO2FINAL_RECORD_H
