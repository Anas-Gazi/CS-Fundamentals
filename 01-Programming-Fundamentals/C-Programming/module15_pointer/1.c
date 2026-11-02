#include<stdio.h>
int main(){

  int n= 10;
  printf("%d\n", n);
  printf("%p\n", &n);

  int* ptr;
  ptr= &n;

  printf("%p\n", ptr);
  printf("%d", *ptr);

  return 0;
}