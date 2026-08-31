#include<stdio.h>

int main()
{
    float radius, Area;

    printf("Enter radius: ");
    scanf("%f", &radius);

    Area = 3.14 * radius * radius;

    printf("Area of circle = %f", Area);

    return 0;
}