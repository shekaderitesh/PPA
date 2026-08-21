#include<iostream>
using namespace std;

class PPA
{

    public: //object cha aat function behaviour lajaga bheatat nhi..same as struct

     int no1;
     int no2;

     void display() //hyala jaga text mdhe bhetal.....binary mdhe convert hot
     {
        cout<<"Inside display"; 
     }

};

int main()
{

    PPA pobj;

    pobj.no1=11;
    pobj.no2=21;
    pobj.display();   
    
    cout<<pobj.no1<<"\n";
    cout<<pobj.no2<<"\n";
     


    return 0;
}

//restraurent,hdfc ecample of oop.
//static (lemon)

