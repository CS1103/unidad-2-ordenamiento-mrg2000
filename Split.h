//
// Created by chuse on 3/10/2019.
//


#ifndef PROYECTO2FINAL_SPLIT_H
#define PROYECTO2FINAL_SPLIT_H

#include <iostream>
#include <vector>
#include "Definiciones.h"
#include "Record.h"

using namespace std;



// SPLIT LINEAS
int _strpos(const std::string& haystack, const std::string& needle);
size_t _strlen(const std::string& text);
std::string _substr(const std::string& data, int begin, int n);
size_t _substrcount(const std::string& pattern, std::string data);
std::vector<std::string> _explode(const std::string& pattern, std::string data);




#endif //PROYECTO2FINAL_SPLIT_H
