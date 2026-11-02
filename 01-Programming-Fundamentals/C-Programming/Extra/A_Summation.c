#include<stdio.h>
int main(){

  int n ;
  long long int x;
  scanf("%d",&n);
 long long sum=0;

  for(int i=1;i<=n;i++){
    scanf("%lld",&x);
    sum+=x;
  }
  if(sum<0){
    sum= -sum;
  }
  printf("%lld",sum);
  return 0;
}