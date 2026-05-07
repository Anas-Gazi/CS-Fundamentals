#include<stdio.h>
int main(){

  int n=3;
  int str =1;
  int space =n-1;
  for(int i=1;i<=n; i++){

    for(int k=1; k<=space; k++){
      printf(" ");
    }

    for(int j=1; j<=str; j++){
      printf("*");
    }
    printf("\n");
    str++;
    space--;
  }
  return 0;
}