#include "Staff.h"

void Staff::CreateStaff()
{
    long long a;
    string b;
    long long c;
    cin>>a>>b>>c;
    ID = a;
    name = b;
    PhoneCode = c;
}
void Staff::PrintStaff()
{
    cout<<"Name is "<<name<<endl;
    cout<<"ID is "<<ID<<endl;
    cout<<"PhoneID is "<<PhoneCode<<endl;
}

long long Staff::CallID()
{
    return ID;
}

string Staff::CallName()
{
    return name;
}

long long Staff::CallPhoneCode()
{
    return PhoneCode;
}