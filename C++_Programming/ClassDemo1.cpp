#include<iostream>
using namespace std;

class PPA
{

    public:

     int no1;
     int no2;

     void display()
     {

        cout<<"Inside display"; //hyala memory bhetat naste

     }



};

int main()
{

    PPA pobj;
     cout <<sizeof(pobj)<<"\n";



    return 0;
}

//OUTPUT = 8BYTE