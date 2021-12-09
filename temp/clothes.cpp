//
// Created by 70929 on 2021/12/8.
//

#include "clothes.h"

Clothes::Clothes()
{
    auto *p = new queue<ElemType>;
    this->data = p;
    l = 0;
}

void Clothes::addOrder(ElemType e)
{
    this->data->push(e);
    this->l ++;
}

ElemType Clothes::deleteOrder(int _i)
{
    auto *temp1 = this->data;
    auto *temp2 = new queue<ElemType>;
    ElemType res{};
    for(int i = 0;i<this->data->size();i++)
    {
        auto e = temp1->front();
        temp1->pop();
        if (i == _i)
        {
            res = e;
            continue;
        }
        temp2->push(e);
    }
    this->data = temp2;
    return res;
}

ElemType Clothes::getData(int _i)
{
    auto temp = this->data;
    for (int i = 0;i <_i;i++)
        temp->pop();
    return temp->front();
}

int Clothes::searchID(char _stuid[], int index)
{
    int _i = -1;
    auto temp = this->data;
    for (int i = index;i<temp->size();i++)
        if (strcmp(temp[i].front().stuid,_stuid) != 0)
            _i = i;
    return _i;
}

int Clothes::searchSize(char _size, int index)
{
    int _i = -1;
    auto temp = this->data;
    for (int i = index;i<temp->size();i++)
        if (temp[i].front().size == _size)
            _i = i;
    return _i;
}

int Clothes::searchName(char _name[],int index)
{
    int _i = -1;
    auto temp = this->data;
    for (int i = index;i<temp->size();i++)
        if (strcmp(temp[i].front().name,_name) != 0)
            _i = i;
    return _i;
}

void Clothes::changeName(char _name[], int index)
{
    auto *temp1 = this->data;
    auto *temp2 = new queue<ElemType>;
    for(int i = 0;i<this->data->size();i++)
    {
        auto e = temp1->front();
        temp1->pop();
        if (i == index)
            strcpy_s(e.name,_name);
        temp2->push(e);
    }
    this->data = temp2;
}

void Clothes::chaangeSize(char _size, int index)
{
    auto *temp1 = this->data;
    auto *temp2 = new queue<ElemType>;
    for(int i = 0;i<this->data->size();i++)
    {
        auto e = temp1->front();
        temp1->pop();
        if (i == index)
            e.size = _size;
        temp2->push(e);
    }
    this->data = temp2;
}

void Clothes::changeID(char _stuid[], int index)
{
    auto *temp1 = this->data;
    auto *temp2 = new queue<ElemType>;
    for(int i = 0;i<this->data->size();i++)
    {
        auto e = temp1->front();
        temp1->pop();
        if (i == index)
            strcpy_s(e.stuid, _stuid);
        temp2->push(e);
    }
    this->data = temp2;
}

void Clothes::traverse()
{
    auto *p = this->data;
    for(int i = 0;i<this->l;i++)
    {
        auto e = p->front();
        visit(e);
    }
}

void Clothes::visit(ElemType e)
{
    string t;

    switch (e.size)
    {
        case '1':
            t = "S";
            break;
        case '2':
            t = "M";
            break;
        case '3':
            t = "L";
            break;
        case '4':
            t = "XL";
            break;
    }

    cout<<"Student Name:\t"<<e.name  <<endl;
    cout<<"Student ID:\t\t"<<e.stuid <<endl;
    cout<<"Choose Size:\t" <<t       <<endl;
    cout<<"buy numbers:\t" <<e.number<<endl;
    cout<<endl;
}