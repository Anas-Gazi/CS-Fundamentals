#include<stdio.h>
int main(){

  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0; i<n;i++){
    scanf("%d",&arr[i]);
  }

  int a,x;
  scanf("%d %d",&a,&x);
  arr[a]=x;

printf("------\n");
  for(int i=0;i<n;i++){
    printf("%d\n", arr[i]);
  }
  return 0;
}
// This code reads an integer n, then reads n integers into an array. It then reads two integers a and x, and updates the element at index a in the array to be x. Finally, it prints the updated array. but it does not insert a new element, it just updates an existing element. it replaces the value at index a with x.
//output
// 5 
// 1 2 3 4 5
// 2 10
//------
// 1
// 2
// 10
// 4
// 5 