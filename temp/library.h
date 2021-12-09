//
// Created by 70929 on 2021/12/11.
//

#ifndef TEMP_LIBRARY_H
#define TEMP_LIBRARY_H

#include "string"
#include "iostream"
#include "account.h"
using namespace std;

class Library
{
private:
    int n = 0;
    int s = 0;
    int m = 0;
    int l = 0;
    int xl = 0;
public:
    int getN();
    int getS();
    int getM();
    int getL();
    int getXl();

    void setN(int _);
    void setS(int _);
    void setM(int _);
    void setL(int _);
    void setXl(int _);
};


#endif //TEMP_LIBRARY_H
