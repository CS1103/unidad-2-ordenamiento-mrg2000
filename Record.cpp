//
// Created by chuse on 3/10/2019.
//

#include "Record.h"

Record::Record() {

}




void Record::setPais(const TipoCadena &pais) {
    Record::pais = pais;
}

void Record::setAno(TipoEntero ano) {
    Record::ano = ano;
}

void Record::setCodigo(TipoEntero codigo) {
    Record::codigo = codigo;
}

void Record::setCommodity(const TipoCadena &commodity) {
    Record::commodity = commodity;
}

void Record::setFlujo(const TipoCadena &flujo) {
    Record::flujo = flujo;
}

void Record::setTrade(TipoEntero trade) {
    Record::trade = trade;
}

void Record::setPeso(TipoNumerico peso) {
    Record::peso = peso;
}

void Record::setSiNoCantidad(TipoCadena siNoCantidad) {
    Record::siNoCantidad = siNoCantidad;
}

void Record::setCantidad(TipoEntero cantidad) {
    Record::cantidad = cantidad;
}

void Record::setCategoria(const TipoCadena &categoria) {
    Record::categoria = categoria;
}

const TipoCadena &Record::getPais() const {
    return pais;
}

TipoEntero Record::getAno() const {
    return ano;
}

TipoEntero Record::getCodigo() const {
    return codigo;
}

const TipoCadena &Record::getCommodity() const {
    return commodity;
}

const TipoCadena &Record::getFlujo() const {
    return flujo;
}

TipoEntero Record::getTrade() const {
    return trade;
}

TipoNumerico Record::getPeso() const {
    return peso;
}

TipoCadena Record::isSiNoCantidad() const {
    return siNoCantidad;
}

TipoEntero Record::getCantidad() const {
    return cantidad;
}

const TipoCadena &Record::getCategoria() const {
    return categoria;
}
