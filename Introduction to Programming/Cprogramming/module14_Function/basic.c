#include<stdio.h>
int sum(int num1, int num2){

  int ans= num1 + num2;
  return ans;
}

int sub(int num1, int num2){
  int ans=(num1 - num2);
  return ans;
}
int main(){

 int val = sum(10, 5);
 int val1= sub(10,20);
 printf("%d %d", val, val1);
  return 0;
}

// return + parameter