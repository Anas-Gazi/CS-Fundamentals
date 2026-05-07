#include<stdio.h>
int main(){

  int n = 5;
  int val=1;
  int space=n-1;
  for(int i=1;i<=n; i++){
    for(int k=1;k<=space; k++){
      printf(" ");
    }
     for(int j=1; j<=val; j++){
      printf("%d",j);
     }
printf("\n");
val+=2;
space--;
  }

  return 0;
}