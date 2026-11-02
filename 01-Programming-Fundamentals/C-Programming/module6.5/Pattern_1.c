#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
for(int i=1;i<=n; i++ ){
    for(int j=1;j<=i;j++){ // Inner loop runs from 1 to i
      printf("%d",j);
    }
    printf("\n");
}

  return 0;
}

// Sample Input: 5
// Sample Output:
// 1
// 12
// 123
// 1234
// 12345

// Explanation: The program takes an integer input 'n' and prints a pattern of numbers in ascending order. The outer loop runs from 1 to 'n', and the inner loop prints the numbers from 1 to the current value of 'i'. Each line of output corresponds to a new value of 'i', creating a pattern that starts with 1 and increases by one in each subsequent line until it reaches 'n'.