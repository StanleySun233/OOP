
//
// Created by 70929 on 2021/12/9.
//

#ifndef PROJ1_ADD_H
#define PROJ1_ADD_H

#include "iostream"
#include "string"
using namespace std;

class Add
{
private:
    int n;
    string s;
public:
    Add(int _n,string &_s);
    void add(int s);
    void add(string _s);
    void prN();
    void prS();
};

#endif //PROJ1_ADD_H
