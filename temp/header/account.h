//
// Created by 70929 on 2021/12/11.
//

#ifndef TEMP_ACCOUNT_H
#define TEMP_ACCOUNT_H

#include "iostream"
#include "string"
#include <utility>

using namespace std;

class Account{
private:
    string account;
    string password;
public:
    Account();
    void setAccount(string s);
    void setPassword(string s);
    string getAccount();
    string getPassword();
};

#endif //TEMP_ACCOUNT_H
