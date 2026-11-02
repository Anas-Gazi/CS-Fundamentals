#include<stdio.h>
int main(){

  int n;
  scanf("%d",&n);

  int a[n-1];
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]); // taking input of the array
  }
  int c;
  scanf("%d",&c);
  for(int i=c ; i<n-1;i++){ // shifting the elements to the left
    a[i]= a[i+1]; // shifting the elements to the left
  }
  n--;
  for(int i=0;i<n;i++){
    printf("%d ",a[i]);
  }

  return 0;
}

// This code takes an array of size n-1, and then deletes the element at index c by shifting the elements to the left. Finally, it prints the modified array.