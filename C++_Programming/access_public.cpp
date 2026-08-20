//copy of encapsulation3

#include<iostream>
using namespace std;

class demo //by default private access specifier
{
    public: //by default private hota...te ata declare kela..ata error nhi yenar

    int i; //data
    char ch;
    float f; //data 

};

int main()
{

    demo dobj;

    dobj.i=11;
    dobj.ch='A';
    dobj.f=3.14;

    cout<<dobj.i<<"\n";
    cout<<dobj.ch<<"\n";
    cout<<dobj.f<<"\n";

   

    return 0;
}

