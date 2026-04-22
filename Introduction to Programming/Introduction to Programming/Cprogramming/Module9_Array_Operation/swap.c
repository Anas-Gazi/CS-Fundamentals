#include<stdio.h>
int main(){

  int a=10;
  int b=20;

  int tmp =a;
  a=b;
  b=tmp;
  printf(" A= %d\n B= %d",a,b);

  return 0;
}
// This code swaps the values of two variables a and b using a temporary variable tmp. After the swap, it prints the new values of a and b.
// The output of this code will be:
//  A= 20
//  B= 10
