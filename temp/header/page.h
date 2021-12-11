//
// Created by 70929 on 2021/12/11.
//

#ifndef TEMP_PAGE_H
#define TEMP_PAGE_H

#include "string"
#include "iostream"
#include "account.h"
#include "library.h"
#include "clothes.h"
using namespace std;

class Page
{
private:
    Account *acc;
    Library *lib;
    Clothes *clo;
public:
    Page();
    void homePage(int);
    void login();
    void student();
    void manager();
    void clothS();
    void clothM();
    void clothL();
    void clothXl();
    void listLog();
};

#endif //TEMP_PAGE_H
