#include<stdio.h>
int main(){

  int n;
  scanf("%d",&n);
  int arr[n];

  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  int i=0,j=n-1;
  while(i<j){
    int temp =arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
      i++;
      j--;
  }

  for(int i=0;i<n;i++){
    printf("%d ", arr[i]);

  }
  return 0;
}
// This code takes an array of size n, and then reverses the elements of the array by swapping the first and last elements, then the second and second last elements, and so on until the middle of the array is reached. Finally, it prints the modified array.

// The output of this code will be the reversed array. For example, if the input array is [1, 2, 3, 4, 5], the output will be [5, 4, 3, 2, 1].