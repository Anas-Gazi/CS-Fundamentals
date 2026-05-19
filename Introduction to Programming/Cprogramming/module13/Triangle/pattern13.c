#include<stdio.h>
int main(){

  int n;   
  scanf("%d", &n);
  int str =1;
  int space =n-1;

  for(int i=1;i<=n; i++){

    for(int k=1; k<=space; k++){
      printf(" ");
    }

    for(int j=str; j>=1; j--){
      printf("%d", j);
    }

    printf("\n");
    str++;
    space--;
  }
  return 0;
}