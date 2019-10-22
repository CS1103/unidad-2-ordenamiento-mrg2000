#include <iostream>
#include <fstream>
#include "Definiciones.h"
#include "Split.h"
#include "Record.h"
#include "Generales.h"
#include "HeapSort.h"
#include <algorithm>
#include "MergeSort.h"
#include "ShellSort.h"
#include "QuickSort.h"

using namespace std;



int main() {

    vector <Record> records = VectorRecords();
    MaxHeap(records,false);
    ImprimirArchivo("MaxHeap1.csv",records);
    MaxHeap(records,true);
    ImprimirArchivo("MaxHeap2.csv",records);
    shell_sort(records);
    ImprimirArchivo("Shell1.csv",records);
    merge_sort(records);
    ImprimirArchivo("Merge1.csv", records);
    quick_sort(records,2,3);
    ImprimirArchivo("Quick1.csv",records);
    return 0;
}