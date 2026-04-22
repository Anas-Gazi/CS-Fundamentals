#include<stdio.h>
int main(){

  int x =10;
  int y=x++; // Post-increment: 'y' gets the value of 'x' (10) before 'x' is incremented to 11
  int z=++x; // Pre-increment: 'x' is incremented to 12 before its value is assigned to 'z', so 'z' gets the value 12
  printf("%d %d %d",x,y,++ z);

  return 0;
}
// This program demonstrates the use of post-increment and pre-increment operators in C. The variable 'x' is initialized to 10. The post-increment operator (x++) increments 'x' after its value is assigned to 'y', so 'y' gets the value 10. The pre-increment operator (++x) increments 'x' before its value is assigned to 'z', so 'z' gets the value 12. Finally, the program prints the values of 'x', 'y', and 'z'.