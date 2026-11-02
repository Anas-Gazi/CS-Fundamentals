//C program to find HCF of two numbers
#include <stdio.h>
int main()
{
    int Num1, r, Num2, Temp, GCD;
    printf("Enter two integer Values\n");
    scanf("%d %d", &Num1, &Num2);
    while (Num1 != 0) {
 	r = Num2 % Num1;
 	//Num2 = r;
 	Num2=Num1;
 	Num1 = r;
    }
    GCD = Num2;
    printf("GCD = %d", GCD);
    return 0;
}
