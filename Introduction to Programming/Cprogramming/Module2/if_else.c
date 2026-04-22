#include<stdio.h>
int main(){
  int tk;
  scanf("%d",&tk);
  if(tk>=100){
    printf("Burger khabo\n");
  }
  else if(tk>=50){
    printf("Fuchka khabo\n");
  }
  else
  {
    printf("kichui khabo na");
  }
}
// This code takes an integer input representing money (tk) and decides what to eat based on the amount. If tk is 100 or more, it prints "Burger khabo". If tk is between 50 and 99, it prints "Fuchka khabo". If tk is less than 50, it prints "kichui khabo na".