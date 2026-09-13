#include<stdio.h>

int main()
{
    int Arr[4];
    int i;

    Arr[3]=40;
    Arr[1]=20;
    Arr[2]=30;
    Arr[0]=10;
    
    for(i = 0; i < 4; i++)
    
    printf("%d\n", Arr[i]);
  
    return 0;
}