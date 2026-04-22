#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
for(int i=n;i>=1;i-- ){ // Outer loop runs from n down to 1

    for(int j=i;j>=1;j--){ // Inner loop runs from i down to 1 
      printf("%d ",j);
    }
    printf("\n");
}

  return 0;
}

// Sample Input: 5
// Sample Output: 
// 5 4 3 2 1 
// 4 3 2 1 
// 3 2 1 
// 2 1 
// 1
// Explanation: The program takes an integer input 'n' and prints a pattern of numbers in descending order. The outer loop runs from 'n' down to 1, and the inner loop prints the numbers from the current value of 'i' down to 1. Each line of output corresponds to a new value of 'i', creating a pattern that starts with 'n' and decreases by one in each subsequent line until it reaches 1.