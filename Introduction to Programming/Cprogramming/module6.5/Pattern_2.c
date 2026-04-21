#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
for(int i=1;i<=n;i++ ){ // Outer loop runs from 1 to n
    for(int j=n;j>=i;j--){ // Inner loop runs from n down to i
      printf("%d ",j);
    }
    printf("\n");
}

  return 0;
}

// Sample Input: 5
// Sample Output:
// 5 4 3 2 1
// 5 4 3 2  
// 5 4 3
// 5 4
// 5
// Explanation: The program takes an integer input 'n' and prints a pattern of numbers in descending order. The outer loop runs from 1 to 'n', and the inner loop prints the numbers from 'n' down to the current value of 'i'. Each line of output corresponds to a new value of 'i', creating a pattern that starts with 'n' and decreases by one in each subsequent line until it reaches 1.