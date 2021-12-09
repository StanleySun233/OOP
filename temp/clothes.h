//
// Created by 70929 on 2021/12/8.
//

#ifndef TEMP_CLOTHES_H
#define TEMP_CLOTHES_H

#include <iostream>
#include "queue"
#include "string"
#include <iomanip>
#include <cctype>

using namespace std;

struct ElemType
{
    char name[15];
    char stuid[15];
    int number;
    char size;
};

class Clothes
{
private:
    queue<ElemType> *data;
    int l;
public:
    Clothes();
    void addOrder(ElemType e);
    ElemType deleteOrder(int _i);
    ElemType getData(int _i);
    int searchID(char _stuid[],int index);
    int searchSize(char _size,int index);
    int searchName(char _name[],int index);
    void changeName(char _name[],int index);
    void chaangeSize(char _size, int index);
    void changeID(char _stuid[], int index);
    void traverse();
    void Clothes::visit(ElemType e);
};

#endif //TEMP_CLOTHES_H
