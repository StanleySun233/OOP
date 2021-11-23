//
// Created by 70929 on 2021/12/8.
//

#include "Clothes.h"

ElemType Clothes::getData(int _i)
{
    auto temp = this->data;
    for (int i = 0;i <_i;i++)
        temp->pop();
    return temp->front();
}

int Clothes::searchID(char _stuid[],int index)
{
    int _i = -1;
    auto temp = this->data;
    for (int i = index;i<temp->size();i++)
        if (strcmp(temp[i].front().stuid,_stuid))
            _i = i;
    return _i;
}

int Clothes::searchSize(char _size,int index)
{
    int _i = -1;
    auto temp = this->data;
    for (int i = index;i<temp->size();i++)
        if (temp[i].front().size == _size)
            _i = i;
    return _i;
}

int Clothes::searchName(char _name[])
{
    int _i = -1;
    auto temp = this->data;
    for (int i = 0;i<temp->size();i++)
        if (strcmp(temp[i].front().name,_name))
            _i = i;
    return _i;
}