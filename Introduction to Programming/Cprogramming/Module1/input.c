#include<stdio.h>
int main(){

  int num1;
  float num2;
  char ch;

  scanf("%d",&num1);
  scanf("%f",&num2); 
  scanf(" %c",&ch); // to take character input, we need to give a space before %c in scanf. This is because when we press enter after giving input for num2, it takes that enter as input for ch. So to avoid that we give a space before %c.

  
  printf("%d %.2f %c",num1,num2,ch);
}

//output
// 40 35.01 a