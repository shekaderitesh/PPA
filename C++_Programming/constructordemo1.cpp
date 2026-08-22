#include<iostream>
using namespace std;

class PPA
{

    public: 

     int no1;
     int no2;

     PPA()         //constructor
     {
        cout<<"inside default constructor\n";
     }

     ~PPA()  //destructor
     {
        cout<<"inside destructor\n";

     }

};

int main()
{

    PPA pobj1;
    PPA pobj2;



    return 0;
}

//output =inside default constructor
//inside default constructor
//inside destructor
//inside destructor

//2 object 2 cons.des



