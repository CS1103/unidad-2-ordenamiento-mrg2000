//
// Created by Maor Roizman Gheiler on 2/10/19.
//

#ifndef PROYECTO_2_ORDENAMIENTO_SHELL_H
#define PROYECTO_2_ORDENAMIENTO_SHELL_H


#include <iostream>
#include <vector>
#include "Record.h"
using namespace std;


template<template<typename , typename...>class container, typename T>
void shell_sort(container<T>& A) {
    int gap = A.size() / 2;
    while (gap > 0) {
        for (int i = gap; i < A.size(); i++) {
            for (int j = i; j >= gap; j -= gap) {
                if (A[j].getTrade() < A[j - gap].getTrade())
                    swap(A[j], A[j - gap]);
                else
                    break;
            }
        }
        gap = gap / 2;
    }
}


template<template<typename , typename...>class container, typename T>
void shell_sort(container<T>& A,bool b) {
    int gap = A.size() / 2;
    while (gap > 0) {
        for (int i = gap; i < A.size(); i++) {
            for (int j = i; j >= gap; j -= gap) {
                if (A[j].getTrade() < A[j - gap].getTrade() && A[j].getAno() < A[j - gap].getAno() && A[j].getPais() < A[j - gap].getPais() && A[j].getCommodity() < A[j - gap].getCommodity() && A[j].getFlujo() < A[j - gap].getFlujo())
                    swap(A[j], A[j - gap]);
                else
                    break;
            }
        }
        gap = gap / 2;
    }
}


#endif //PROYECTO_2_ORDENAMIENTO_SHELL_H
