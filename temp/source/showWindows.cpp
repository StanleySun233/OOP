//
// Created by 70929 on 2021/12/19.
//

#include "../header/showWindows.h"


showWindows::showWindows()
{
    this->lib = nullptr;
}


showWindows::showWindows(Library *l)
{
    this->lib = l;
}

void showS::showSWindow()
{
    int cases=0,res=0,input=0,output=0;
    while (true)
    {
        cout << "1.In   2.Out   3.Output inventory    4.Exit" << endl;
        cin >> cases;
        switch (cases) {
            case 1:
                cout << "Please enter the inbound quantity" << endl;
                cin >> input;
                res = res + input;
                this->lib->setS(this->lib->getS() + input);
                break;
            case 2:
                cout << "Please enter the number of outgoing libraries" << endl;
                cin >> output;
                res = res - output;
                this->lib->setS(this->lib->getS() - output);
                break;
            case 3:
                cout << res << endl;
                break;
            case 4:
                break;
        }
        if (cases == 4)
            break;
    }
}

showS::showS(Library *l) : showWindows(l)
{
    this->lib = l;
}

void showM::showMWindow()
{
    int cases = 0, res = 0, input = 0, output = 0;
    while(true)
    {
        cout << "1.In   2.Out   3.Output inventory    4.Exit" << endl;
        cin >> cases;
        switch (cases)
        {
            case 1:
                cout << "Please enter the inbound quantity" << endl;
                cin >> input;
                res = res + input;
                this->lib->setM(this->lib->getM() + input);
                break;
            case 2:
                cout << "Please enter the number of outgoing libraries" << endl;
                cin >> output;
                res = res - output;
                this->lib->setM(this->lib->getM() - output);
                break;
            case 3:
                cout << res << endl;
            case 4:
                break;
        }
        if (cases == 4)
            break;
    }
}

showM::showM(Library *l) : showWindows(l) {
    this->lib =l;

}

void showL::showLWindow()
{
    int cases = 0, res = 0, input = 0, output = 0;
    while(true) {
        cout << "1.In   2.Out   3.Output inventory    4.Exit" << endl;
        cin >> cases;
        switch (cases) {
            case 1:
                cout << "Please enter the inbound quantity" << endl;
                cin >> input;
                res = res + input;
                this->lib->setM(this->lib->getL() + input);
                break;
            case 2:
                cout << "Please enter the number of outgoing libraries" << endl;
                cin >> output;
                res = res - output;
                this->lib->setM(this->lib->getL() - output);
                break;
            case 3:
                cout << res << endl;
            case 4:
                break;
        }
        if (cases == 4)
            break;
    }
}

showL::showL(Library *l) : showWindows(l)
{
    this->lib = l;
}

void showXl::showXlWindow()
{
    int cases = 0, res = 0, input = 0, output = 0;
    while (true) {
        cout << "1.In   2.Out   3.Output inventory    4.Exit" << endl;
        cin >> cases;
        switch (cases) {
            case 1:
                cout << "Please enter the inbound quantity" << endl;
                cin >> input;
                res = res + input;
                this->lib->setXl(this->lib->getXl() + input);
                break;
            case 2:
                cout << "Please enter the number of outgoing libraries" << endl;
                cin >> output;
                res = res - output;
                this->lib->setXl(this->lib->getXl() - output);
                break;
            case 3:
                cout << res << endl;
                break;
            case 4:
                break;
        }
        if (cases == 4)
            break;
    }
}

showXl::showXl(Library *l) : showWindows(l) {
    this->lib = l;

}
