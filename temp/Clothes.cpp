//
// Created by 70929 on 2021/12/8.
//

#include "Clothes.h"

Clothes::Clothes()
{
    this->data = nullptr;
}

void Clothes::addOrder(ElemType e)
{
    this->data->push(e);
}

ElemType Clothes::deleteOrder(int _i)
{
    auto *temp1 = this->data;
    queue<ElemType> temp2;
    for(int i = 0;i<this->data->size();i++)
    {
        auto e = temp1->front();
        temp1->pop();
        if (i == _i)
            continue;
        temp2.push(e);
    }
    this->data = &temp2;
}

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

void Clothes::changeName(char _name[],int index)
{
    auto *temp1 = this->data;
    queue<ElemType> temp2;
    for(int i = 0;i<this->data->size();i++)
    {
        auto e = temp1->front();
        temp1->pop();
        if (i == index)
            strcpy_s(e.name,_name);
        temp2.push(e);
    }
    this->data = &temp2;
}

void Clothes::chaangeSize(char _size, int index)
{
    auto *temp1 = this->data;
    queue<ElemType> temp2 = nullptr;
    for(int i = 0;i<this->data->size();i++)
    {
        auto e = temp1->front();
        temp1->pop();
        if (i == index)
            e.size = _size;
        temp2.push(e);
    }
    this->data = &temp2;
}

void Clothes::changeID(char _stuid[], int index)
{
    auto *temp1 = this->data;
    queue<ElemType> temp2;
    for(int i = 0;i<this->data->size();i++)
    {
        auto e = temp1->front();
        temp1->pop();
        if (i == index)
            strcpy_s(e.stuid, _stuid);
        temp2.push(e);
    }
    this->data = &temp2;
}