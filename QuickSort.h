//
// Created by chuse on 3/10/2019.
//

#ifndef PROYECTO2FINAL_QUICKSORT_H
#define PROYECTO2FINAL_QUICKSORT_H

#include <iostream>
#include <vector>
#include "Definiciones.h"
using namespace std;

/*
template <typename T>
int partition(vector<T>& A, int left, int right) {
    int pivotIndex = left + (right - left) / 2;
    TipoEntero pivotValue = A[pivotIndex].getTrade();
    int i = left, j = right;
    vector<T> temp;
    while (i <= j) {
        while (A[i].getTrade() < pivotValue) {
            i++;
        }
        while (A[j].getTrade() > pivotValue) {
            j--;
        }
        if (i <= j) {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            i++;
            j--;
        }
    }
    return i;
}


template <typename T>
void quick_sort(vector <T>& A, int left, int right) {
    if (left < right) {
        int pivotIndex = partition(A, left, right);
        quick_sort(A, left, pivotIndex - 1);
        quick_sort(A, pivotIndex, right);
    }
}

*/

template <template < typename ... > class Container >
int partition( Container<Record>& A, int left, int right) {
    int pivotIndex = left + (right - left) / 2;
    TipoEntero pivotValue = A[pivotIndex].getTrade();
    int i = left, j = right;
    Record temp;
    while (i <= j) {
        while (A[i].getTrade() < pivotValue) {
            i++;
        }
        while (A[j].getTrade() > pivotValue) {
            j--;
        }
        if (i <= j) {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            i++;
            j--;
        }
    }
    return i;
}

template <template < typename ... > class Container >
void quick_sort(Container <Record>& A, int left, int right) {
    if (left < right) {
        int pivotIndex = partition(A, left, right);
        quick_sort(A, left, pivotIndex - 1);
        quick_sort(A, pivotIndex, right);
    }
}




#endif //PROYECTO2FINAL_QUICKSORT_H
