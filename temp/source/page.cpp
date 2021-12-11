//
// Created by 70929 on 2021/12/11.
//

#include "../header/page.h"

Page::Page()
{
    this->acc = new Account;
    this->clo = new Clothes;
    this->lib = new Library;
}

void Page::homePage(int flag)
{
    if (!flag)
        system("mode con lines=13 cols=54");

    cout << "*****************************************************"<<endl;
    cout << "*                                                   *"<<endl;
    cout << "*   Welcome to the Uniform Subscription System      *"<<endl;
    cout << "*      Please select your identity                  *"<<endl;
    cout << "*                                                   *"<<endl;
    cout << "*                                                   *"<<endl;
    cout << "*                1.Admin 2.Student 3.Exit           *"<<endl;
    cout << "*                                                   *"<<endl;
    cout << "*                                                   *"<<endl;
    cout << "*****************************************************"<<endl;
    int ch;

    while (cin >> ch)
    {
        switch (ch)
        {
            case 1://管理员
                this->login();
                break;
            case 2://学生
                cout << "Student\n";
                this->student();
                this->homePage(1);
                break;
            case 3://退出
                exit(0);
            default:
                cout << "Please select the correct option!"<<endl;
                this->homePage(1);
        }
    }
}
void Page::student()
{
    cout << "*****************************************************"<<endl;
    cout << "*Input the size of Clothes:                         *"<<endl;
    cout << "*1.S    2.M    3.L     4.XL                         *"<<endl;
    cout << "*Input the numbers of Clothes                       *"<<endl;
    cout << "*Input your student id                              *"<<endl;
    cout << "*Input your name                                    *"<<endl;

    auto *e = new ElemType;
    int num;
    char id[15],name[15],size;
    cin >> size >> num >> id >> name;

    strcpy_s(e->stuid,id);
    strcpy_s(e->name,name);
    e->size = size;
    e->number = num;

    this->lib->setN(this->lib->getN()+num);
    this->clo->addOrder(*e);

    switch (size)
    {
        case '1':
            this->lib->setS(this->lib->getS()+num);
            break;
        case '2':
            this->lib->setM(this->lib->getM()+num);
            break;
        case '3':
            this->lib->setL(this->lib->getL()+num);
            break;
        case '4':
            this->lib->setXl(this->lib->getXl()+num);
            break;
    }
    cout << "Clothes book success!" << endl;
}

void Page::login() //管理员登录
{
    string un, pw;
    cout << "Input the Account:";
    cin >> un;
    cout << "Input the Password:";
    cin >> pw;
    system("cls");
    if (un == this->acc->getAccount() && pw == this->acc->getPassword())
    {
        system("mode con lines=30 cols=120");
        cout << "Login success!"<<endl;
        this->manager();
    }
    else
    {
        cout << "Password is wrong!"<<endl;
        this->homePage(1);
    }
}

void Page::manager()
{
    int cases;
    cout << "List" << endl;
    cout << "*****************************************************"<<endl;
    cout << "s  of Clothes\t" << this->lib->getS()  <<  "\tcnt"<<endl;
    cout << "m  of Clothes\t" << this->lib->getM()  <<  "\tcnt" << endl;
    cout << "l  of Clothes\t" << this->lib->getL()  <<  "\tcnt" << endl;
    cout << "xl of Clothes\t" << this->lib->getXl()  << "\tcnt" << endl;
    cout << "Input the size of Clothes to retrieval" << endl;
    cout << "1.s\t2.m\t3.l\t4.xl\t5.check info" << endl;

    cin >> cases;
    switch (cases) {
        case 1:
            this->clothS();
            break;
        case 2:
            this->clothM();
            break;
        case 3:
            this->clothL();
            break;
        case 4:
            this->clothXl();
            break;
        case 5:
            this->listLog();
    }
    cout << "Input whether to continue: 1. Continue 2.Exit" << endl;

    cin >> cases;
    if(cases)
        this->manager();
    else
        cout << "Operation success!" << endl;
}

void Page::clothS()
{
    auto *s = new showS(this->lib);
    s->showSWindow();
}

void Page::clothM()
{
    auto *s = new showM(this->lib);
    s->showMWindow();
}

void Page::clothL()
{
    auto *s = new showL(this->lib);
    s->showLWindow();
}

void Page::clothXl()
{
    auto *s = new showXl(this->lib);
    s->showXlWindow();
}

void Page::listLog()
{
    cout<<"0.exit"<<endl;
    cout<<"1.check the student book information"<<endl;
    cout<<"2.search student name"<<endl;
    cout<<"3.search student id"<<endl;
    cout<<"4.search student size"<<endl;
    int cases,index;
    char name[15],stuid[15],size;
    cin>>cases;
    while (true) {
        switch (cases) {
            case 0:
                break;
            case 1:
                this->clo->traverse();
                break;
            case 2:
                cin >> name;
                index = this->clo->searchName(name, 0);
                if (index + 1)
                    cout << "Student is not in book list." << endl;
                else
                    this->clo->visit(this->clo->getData(index));
                break;
            case 3:
                cin >> stuid;
                index = this->clo->searchID(stuid, 0);
                if (index + 1)
                    cout << "Student is not in book list." << endl;
                else
                    this->clo->visit(this->clo->getData(index));
                break;
            case 4:
                cout << "*1.S    2.M    3.L     4.XL" << endl;
                cin >> size;
                index = this->clo->searchSize(size, 0);
                if (index + 1)
                    cout << "Student is not in book list." << endl;
                else
                    this->clo->visit(this->clo->getData(index));
                break;
        }
        if (cases == 0)
            break;
    }
}
