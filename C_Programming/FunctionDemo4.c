#include<stdio.h>
    
int main()

{
    int value1 = 0, value2 = 0, Ans = 0;

    printf("Enter First number : \n");
    scanf("%d",&value1);

    printf("Enter Second number : \n");
    scanf("%d",&value2);

    Ans = value1 + value2;            // Business Logic

    printf("Addition is : %d\n",Ans); 
   

    return 0;
}