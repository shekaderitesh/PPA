#include<stdio.h>
    
int Addition(int No1, int No2)
{
    int Result = 0;
    Result = No1 + No2;         // Business Logic
    return Result;
}

int main()
{
    int value1 = 0, value2 = 0, Ans = 0;

    printf("Enter First number : \n");
    scanf("%d",&value1);

    printf("Enter Second number : \n");
    scanf("%d",&value2);

    Ans = Addition(value1 , value2);
    
    printf("Addition is : %d\n",Ans);
    return 0;
}