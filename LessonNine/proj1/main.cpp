#include "Add.h"

int main()
{
    string s = "Hello";
    int n = 15;
    Add a(n,s);

    a.prN(),a.prS();
    a.add(10);
    a.add(" World");

    a.prN(),a.prS();
    return 0;
}
