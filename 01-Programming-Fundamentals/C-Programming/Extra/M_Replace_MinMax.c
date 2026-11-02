#include<stdio.h>
#include <limits.h>
#include<string.h>
int main(){

  int n;
  scanf("%d",&n);

  int min= INT_MAX;
  int min_idx=-1;
  int max= INT_MIN;
  int max_idx= -1;
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",& arr[i]);

  if(arr[i]>max){
    max= arr[i];
    max_idx= i;
  }
  if (arr[i]<min){
    min= arr[i];
    min_idx =i;
  }

  }

arr[min_idx]= max;
arr[max_idx] = min;

// printf("%d ",max);
// printf("%d ",min);

    for(int i=0;i<n;i++){
    printf("%d ", arr[i]);
  }

  return 0;
}