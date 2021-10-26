#include "iostream"
using namespace std;

class Staff
{
private:
    long long ID;
    string name;
    long long PhoneCode;
public:
    void CreateStaff();
    void PrintStaff();
    long long CallID();
    string CallName();
    long long CallPhoneCode();
};

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

int main()
{
    Staff s;
    s.CreateStaff();
    s.PrintStaff();
}
