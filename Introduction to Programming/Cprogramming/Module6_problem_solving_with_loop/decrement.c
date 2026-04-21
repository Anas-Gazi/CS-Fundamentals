#include<stdio.h>
int main(){

  int x =10; 
  int y=x--;// Post-decrement: 'y' gets the value of 'x' (10) before 'x' is decremented to 9
  int z=--x; // Pre-decrement: 'x' is decremented to 8 before its value is assigned to 'z', so 'z' gets the value 8
  printf("%d %d %d",x,y,z);

  return 0;
}
// This program demonstrates the use of post-decrement and pre-decrement operators in C. The variable 'x' is initialized to 10. The post-decrement operator (x--) decrements 'x' after its value is assigned to 'y', so 'y' gets the value 10. The pre-decrement operator (--x) decrements 'x' before its value is assigned to 'z', so 'z' gets the value 8. Finally, the program prints the values of 'x', 'y', and 'z'.