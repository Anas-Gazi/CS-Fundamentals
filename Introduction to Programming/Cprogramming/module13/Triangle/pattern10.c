#include<stdio.h>
int main(){

  int n =5;

  for(int i=1; i<=n; i++){ // This loop is responsible for printing each line of the pattern
    int a= i-1; // This variable 'a' is used to keep track of the current number to be printed in the decreasing order
    for(int k=i; k<n; k++){ // This loop is responsible for printing the spaces before the numbers
      printf("-");
    }
   
    for(int j=1; j<=i; j++){ // This loop is responsible for printing the numbers in increasing order
      printf("%d", j);
    }
    for(int k=1; k<=i-1; k++){ // This loop is responsible for printing the numbers in decreasing order
      printf("%d",a);
      a--;
    }
    printf("\n");
  }

  return 0;
}
//Output
//----1
//---121
//--12321
//-1234321
//123454321
//In this pattern, we have two nested loops. The first loop prints the spaces, and the second loop prints the numbers in increasing order. The third loop prints the numbers in decreasing order. We use a variable 'a' to keep track of the current number to be printed in the decreasing order.