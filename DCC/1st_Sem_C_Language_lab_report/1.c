/*Write a C program to find the area  and circumference of a circle.
(Use PI as a symbolic constant)*/
#include <stdio.h>

#define PI 3.14
int main()
{
    float rad, cir, area;
    printf("Enter Radius Value of Circle: ");
    scanf("%f", &rad);
    //area = 3.14*rad*rad;
    //cir = 2*3.14*rad;
    area = PI*rad*rad;
    cir = 2*PI*rad;
    printf("\nArea = %0.2f", area);
    printf("\nArea = %0.2f", cir);

    return 0;
}
