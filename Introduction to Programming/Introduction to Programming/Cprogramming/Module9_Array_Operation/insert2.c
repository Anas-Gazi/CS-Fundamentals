#include<stdio.h>
int main(){

  int n;
  scanf("%d",&n);
  int arr[n+1];
  for(int i=0; i<n;i++){
    scanf("%d",&arr[i]);
  }

  int a,x;
  scanf("%d %d",&a,&x);
  

  for(int i=n;i>=a+1;i--){ // shifting the elements to the right
    arr[i]= arr[i-1]; 
  }
  arr[a]=x;

printf("------\n");
  for(int i=0;i<=n;i++){
    printf("%d ", arr[i]);
  }
  return 0;
}
// This code takes an array of size n, and then inserts the element x at index a by shifting the elements to the right. Finally, it prints the modified array.

// The output of this code will be the modified array with the new element inserted at the specified index. For example, if the input array is [1, 2, 3, 4, 5], a is 2 and x is 10, the output will be [1, 2, 10, 3, 4, 5].