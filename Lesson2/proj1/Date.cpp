#include "Date.h"

Date::Date()
{
    yy=2021,mm=9,dd=29;
}

Date::Date(int x,int y,int z)
{
    yy=x,mm=y,dd=z;
}

Date::~Date()
{
    cout<<"Destruct function run successfully."<<endl;
}

void Date::SetDateIO()
{
    int Iyy,Imm,Idd;
    cin>>Iyy>>Imm>>Idd;
    while (Imm > 12 || Imm<1)
    {
        cout<<"Month invalid,input again."<<endl;
        cin>>Imm;
    }

    while (Idd>31 || Idd<1)
    {
        cout<<"day invalid,input again."<<endl;
        cin>>Idd;
    }
    this->yy = Iyy;
    this->mm = Imm;
    this->dd = Idd;
}

int Date::Callyy()
{
    return this->yy;
}
int Date::Callmm()
{
    return this->mm;
}
int Date::Calldd()
{
    return this->dd;
}
bool Date::isLeap()
{
    return this->yy % 4 == 0 && this->yy % 100 != 0 || this->yy % 400 == 0;
}
void Date::PrintFormat()
{
    cout<<Callyy()<<"-";
    if (Callmm()<10)
        cout<<"0"<<Callmm()<<"-";
    else
        cout<<Callmm()<<"-";
    if (Calldd()<10)
        cout<<"0"<<Calldd();
    else
        cout<<Calldd();
    cout<<endl;
}
