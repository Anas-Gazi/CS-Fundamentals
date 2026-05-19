#include<stdio.h>
int odd_even(int arr[], int n, int *odd_count, int *even_count){

   *odd_count=0;
   *even_count =0;
  for(int i=0; i<n; i++){
    if(arr[i]%2==0){
      (*even_count)++;
    }else{
      (*odd_count) ++;
    }
  }
} 
int main(){

  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }

 int odd, even;
 odd_even(arr, n, &odd, &even);

  printf("%d %d", odd, even);
  return 0;
}