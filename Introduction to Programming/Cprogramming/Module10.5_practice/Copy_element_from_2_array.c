#include<stdio.h>
int main(){

  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n; i++){
    scanf("%d",&arr[i]);
  }

  int m;
  scanf("%d",&m);
  int arr1[m];
  for(int i=0;i<m; i++){
    scanf("%d",&arr1[i]);
  }

  int c[n+m];
  for(int i=0;i<n;i++){
    c[i]= arr[i];
  }
   for(int i=0;i<m;i++){
    c[i+n]= arr1[i];
  }

  for(int i=0;i<n+m;i++){
    printf("%d ",c[i]);
  }

  return 0;
}