#include "df.h"
int main()
{
    Student s;
    int i;
    while (true)
    {
        cout<<"Input a sutdent's id, name ,sex, major ,class information."<<endl;
        s.SetStudent();
        s.PrintAll();
        cout<<"Input 1 to continue, 0 to break."<<endl;
        cin>>i;
        if (!i)
            break;
    }
    return 0;
}