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