#include<iostream>
using namespace std;

class PPA
{
    public:
         int No1;
         int No2;
         int No3;

         void Display()
         {
            cout<<"Inside Display\n";
         }

};         

int main()
{
    PPA pobj;
    
    pobj.No1 = 11;
    pobj.No2 = 21;
    pobj.No3 = 31;

    pobj.Display();

    cout<<pobj.No1<<"\n";
    cout<<pobj.No2<<"\n";
    cout<<pobj.No3<<"\n";


   return 0;
}