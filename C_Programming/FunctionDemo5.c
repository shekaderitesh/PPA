#include<stdio.h>
    
void Addition(int No1, int No2)
{
    int Result = 0;
    Result = No1 + No2;         // Business Logic
    printf("Addition is: %d\n", Result);
}

int main()
{
    int value1 = 0, value2 = 0;

    printf("Enter First number : \n");
    scanf("%d",&value1);

    printf("Enter Second number : \n");
    scanf("%d",&value2);

    Addition(value1 , value2);
   
    return 0;
}