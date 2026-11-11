#include<iostream>
using namespace std;

namespace marvellous                      
{
    int i =11;
    void Display()
    {
        cout<<"Inside display of marvellous...";
    }
}

namespace PPA                      
{
    int i =21;
    void Display()
    {
        cout<<"Inside display of ppa...";
    }
}

int main()
{
    marvellous::Display();
    PPA::Display();
        
    return 0;
}