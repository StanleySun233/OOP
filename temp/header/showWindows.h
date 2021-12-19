//
// Created by 70929 on 2021/12/19.
//

#ifndef TEMP_SHOWWINDOWS_H
#define TEMP_SHOWWINDOWS_H

#include "account.h"
#include "library.h"
#include "clothes.h"
#include "iostream"

using namespace std;

class showWindows
{
public:
    Library *lib;
    showWindows();
    showWindows(Library *l);
};

class showS: public showWindows
{
public:
    explicit showS(Library *l);
    void showSWindow();
};

class showM:public showWindows
{
public:
    explicit showM(Library *l);
    void showMWindow();

};

class showL:public showWindows
{
public:
    explicit showL(Library *l);
    void showLWindow();

};

class showXl: public showWindows
{
public:
    explicit showXl(Library *l);
    void showXlWindow();

};
#endif //TEMP_SHOWWINDOWS_H
