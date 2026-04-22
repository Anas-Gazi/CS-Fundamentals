#include<stdio.h>
int main(){

  int num1=40;
  float num2=35.012345;
  char c='a';

  long long int ln=1234567892345678; // long long int is used to store very large integer values, it can store values from -9223372036854775808 to 9223372036854775807.


  double d= 102.963852; // double is used to store very large or very small floating point numbers, it can store values from 1.7E-308 to 1.7E+308 and it can store up to 15 digits after decimal point.

  printf("%d\n",num1); // %d is used to print integer value, \n is used to give a new line after printing the value.

  printf("%f\n",num2); // %f is used to print float value, by default it prints 6 digits after decimal point. If we want to print only 2 digits after decimal point, we can use %.2f.

  printf("%c\n",c);// %c is used to print character value

  printf("%lld\n",ln); // %lld is used to print long long int value
  
  printf("%lf",d);//` %lf is used to print double value

}

//output
// 40
// 35.012345
// a
// 1234567892345678 
// 102.963852
