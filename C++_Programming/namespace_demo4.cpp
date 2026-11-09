#include<iostream>
using namespace std;

namespace marvellous                      
{
    int i =11;
    void Display()
    {
        cout<<"Inside display...";
    }
}
using namespace marvellous;

int main()
{
    cout<<i<<"\n";

    Display();
    
    return 0;
}