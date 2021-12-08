//
// Created by 70929 on 2021/12/8.
//

#ifndef TEMP_CLOTHES_H
#define TEMP_CLOTHES_H

#include <iostream>
#include "queue"
#include "string"
using namespace std;

struct ElemType
{
    char name[10];
    char stuid[15];
    int number;
    char size;
};

class Clothes
{
private:
    queue<ElemType> *data;                      //队列起到先进先出的作用，即先预定的人先拿到货
    int l;
public:
    Clothes();
    void addOrder(ElemType e);                  //入库
    ElemType deleteOrder(int _i);               //出库
    ElemType getData(int _i);                   //获得某一个elemtype
    int searchID(char _stuid[],int index);      //搜索学号，返回序号
    int searchSize(char _size,int index);       //搜索订购的size，返回序号
    int searchName(char _name[]);               //搜索名字，返回序号
    void changeName(char _name[],int index);    //根据索引修改订单名字
    void chaangeSize(char _size, int index);    //根据索引修改衣服大小
    void changeID(char _stuid[], int index);    //根据索引修改学号
};

#endif //TEMP_CLOTHES_H
