#include<stdio.h>
int main(){

  int n;
  scanf("%d",&n);
  int sum=0;
  for(int i=1; i<=n;i++){
    
    sum=sum + i;
  }
  printf("Sum= %d",sum);
}
//This program calculates the sum of all integers from 1 to n. It takes an integer input n from the user, initializes a variable sum to 0, and then uses a for loop to iterate from 1 to n. In each iteration, it adds the current value of i to sum. Finally, it prints the result.