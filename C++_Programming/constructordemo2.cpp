#include<iostream>
using namespace std;

class PPA
{

    public: 

     int no1;
     int no2;

     PPA() 
     {       

        cout<<"inside default constructor\n";
     }

      PPA(int a, int b) //parametrised constructor(pahije tas banvun ghene)
     {       

        cout<<"inside parametrised constructor\n";
     }

     ~PPA()  //destructor
     {
        cout<<"inside destructor\n";

     }

};

int main()
{

    PPA pobj1;
    PPA pobj2(11,21);



    return 0;
}





