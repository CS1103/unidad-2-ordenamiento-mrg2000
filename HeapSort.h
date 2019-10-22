//
// Created by chuse on 3/10/2019.
//

#ifndef PROYECTO2FINAL_HEAPSORT_H
#define PROYECTO2FINAL_HEAPSORT_H

#include "Record.h"
#include <vector>

using namespace std;

// implementando heap sort
template<template<typename , typename...>class container, typename T>
void MaxHeap(container<T>& arr, bool b)
{
    int n = 1000;

    // build heap
    for (int i = n / 2 - 1; i >= 0; i--)
        if(b)
            heapify2(arr, n, i);
        else
            heapify(arr, n, i);


    // extracting elements from heap one by one
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);

        // again call max heapify on the reduced heap
        if(b)
            heapify2(arr, i, 0);
        else
            heapify(arr, i, 0);

    }

}


// function to heapify the tree
template<template<typename , typename...>class container, typename T>
void heapify(container<T> &arr, int n, int root)
{
    int largest = root; // root is the largest element
    int l = 2*root + 1; // left = 2*root + 1
    int r = 2*root + 2; // right = 2*root + 2

    // If left child is larger than root
    if (l < n && arr[l].getTrade() > arr[largest].getTrade())
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r].getTrade() > arr[largest].getTrade())
        largest = r;

    // If largest is not root
    if (largest != root)
    {
        //swap root and largest
        swap(arr[root], arr[largest]);

        // Recursively heapify the sub-tree
        heapify(arr, n, largest);
    }
}

template<template<typename , typename...>class container, typename T>
void heapify2(container<T> &arr, int n, int root)
{
    int largest = root; // root is the largest element
    int l = 2*root + 1; // left = 2*root + 1
    int r = 2*root + 2; // right = 2*root + 2

    // If left child is larger than root
    if (l < n && arr[l].getTrade() > arr[largest].getTrade() && arr[l].getAno() > arr[largest].getAno() && arr[l].getPais() > arr[largest].getPais() && arr[l].getCommodity() > arr[largest].getCommodity() && arr[l].getFlujo() > arr[largest].getFlujo())
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r].getTrade() > arr[largest].getTrade() && arr[l].getAno() > arr[largest].getAno() && arr[l].getPais() > arr[largest].getPais() && arr[l].getCommodity() > arr[largest].getCommodity() && arr[l].getFlujo() > arr[largest].getFlujo())
        largest = r;

    // If largest is not root
    if (largest != root)
    {
        //swap root and largest
        swap(arr[root], arr[largest]);

        // Recursively heapify the sub-tree
        heapify(arr, n, largest);
    }
}



#endif //PROYECTO2FINAL_HEAPSORT_H
