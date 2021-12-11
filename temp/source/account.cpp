//
// Created by 70929 on 2021/12/11.
//

#include "../header/account.h"

Account::Account()
{
    this->setAccount("123");
    this->setPassword("123");
}

void Account::setAccount(string s)
{
    this->account = std::move(s);
}

void Account::setPassword(string s)
{
    this->password = std::move(s);
}

string Account::getAccount()
{
    return this->account;
}

string Account::getPassword()
{
    return this->password;
}
