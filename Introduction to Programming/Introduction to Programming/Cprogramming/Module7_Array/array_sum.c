#include<stdio.h>
int main(){

  int n;
  scanf("%d",&n);
  int arr[n];
  int sum=0;

  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    sum= sum+arr[i];
   
  }
   printf("\nSum = %d",sum);

  return 0;
}