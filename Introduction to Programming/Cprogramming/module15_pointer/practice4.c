#include<stdio.h>
int main(){

  int n[4] = {1,2,3,4};
  int *p;
  p= n +3;
  *p = 5;
  printf("%d\n",n[3]);

  return 0;
}