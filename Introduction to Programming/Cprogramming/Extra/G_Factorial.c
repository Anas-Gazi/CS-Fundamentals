#include<stdio.h>
int main(){

  int n;
  scanf("%d",&n);
  int a;
  for(int i=0; i<n; i++){
    scanf("%d", &a);

    long long int fact =1;
    for(int j=1; j<=a; j++){
      fact *=j;
          
    }
printf("%lld\n", fact);
  }

  return 0;
}