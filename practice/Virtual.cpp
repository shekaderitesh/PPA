#include <iostream>
using namespace std;

class Parent
{
public:
    virtual void show()
    {
        cout << "This is Parent class" << endl;
    }
};

class Child : public Parent
{
public:
    void show()
    {
        cout << "This is Child class" << endl;
    }
};

int main()
{
    Parent *p;

    Child c;

    p = &c;

    p->show();

    return 0;
}