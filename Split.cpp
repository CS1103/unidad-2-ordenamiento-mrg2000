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

using namespace std;


//SPLIT LINEAS
int _strpos(const std::string& haystack, const std::string& needle){
    const char *p = strstr(haystack.c_str(), needle.c_str());
    if (p != nullptr) {
        return p - haystack.c_str();
    }
    return -1;
}


size_t _strlen(const std::string& text){
    return text.size();
}

std::string _substr(const std::string& data, int begin, int n){
    return data.substr(begin, n);
}

size_t _substrcount(const std::string& pattern, std::string data){
    size_t begin, finish, i;
    begin = i = 0;
    while ((finish = _strpos(data, pattern)) != -1) {
        auto cut = _substr(data, begin, finish);
        data = _substr(data, finish+1, _strlen(data)-begin);
        i++;
    }
    return i+1;
}


std::vector<std::string> _explode(const std::string& pattern, std::string data){
    auto n = _substrcount(pattern, data);
    std::vector<std::string> _result;
    size_t begin, finish;
    begin = 0;
    for(int i = 0; i < n; i++){
        finish = _strpos(data, pattern);
        std::stringstream cut { _substr(data, begin, finish) };
        _result.push_back(cut.str());
        data = _substr(data, finish+1, _strlen(data)-begin);
    }
    return _result;
}
