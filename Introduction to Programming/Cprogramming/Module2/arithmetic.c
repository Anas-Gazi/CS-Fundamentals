#include<stdio.h>
int main(){
  int a =30;
  int b=5;
  int sum= a+b;
  printf("Sum: %d",sum); // this will print the sum of a and b 

  int sub= a-b;
  printf("\nDifference: %d",sub); // this will print the difference of a and b 

  int mul = a*b;
  printf("\nProduct: %d", mul); // this will print the product of a and b

  int div = a/b;
  printf("\nDivision: %d", div); // this will print the division of a and b

  int rem = a%b;
  printf("\nRemainder: %d", rem); // this will print the remainder of a and b
  return 0;
}

//output: Sum: 35
//output: Difference: 25
//output: Product: 150
//output: Division:  6
//output: Remainder: 0