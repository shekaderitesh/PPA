#include<iostream>
using namespace std;

namespace marvellous                           //creating namespace
{
    int i =11;
    void Display()
    {
        cout<<"Inside display...";
    }
}
int main()
{
    cout<<marvellous::i<<"\n";

    marvellous::Display();
    
    return 0;
}