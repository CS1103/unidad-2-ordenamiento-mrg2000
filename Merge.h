//
// Created by Maor Roizman Gheiler on 2/10/19.
//

#ifndef PROYECTO_2_ORDENAMIENTO_MERGE_H
#define PROYECTO_2_ORDENAMIENTO_MERGE_H

#include <iostream>
#include <vector>
#include "Record.h"
using namespace std;


void sorting(vector<Record>& left, vector<Record>& right, vector<Record>& a) {
    auto nL = left.size();
    auto nR = right.size();
    int i = 0, j = 0, k = 0;

    while (j < nL && k < nR)
    {
        if (left[j].getTrade() < right[k].getTrade()) {
            a[i] = left[j];
            j++;
        }
        else {
            a[i] = right[k];
            k++;
        }
        i++;
    }
    while (j < nL) {
        a[i] = left[j];
        j++; i++;
    }
    while (k < nR) {
        a[i] = right[k];
        k++; i++;
    }
}

void merge_sort(vector<Record>& A) {
    if (A.size() <= 1) return;

    auto mid = A.size() / 2;
    vector<Record> left;
    vector<Record> right;

    for (size_t j = 0; j < mid; j++)
        left.push_back(A[j]);
    for (size_t j = 0; j < (A.size()) - mid; j++)
        right.push_back(A[mid + j]);

    merge_sort(left);
    merge_sort(right);
    sorting(left, right, A);
}





#endif //PROYECTO_2_ORDENAMIENTO_MERGE_H
