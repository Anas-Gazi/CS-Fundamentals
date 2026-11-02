#include<stdio.h>
int main(){

  int n =5;

  for(int i=1; i<=n; i++){ 
    for(int k=i; k<n; k++){ 
      printf("-");
    }
   int a =i-1;
    for(int j=1; j<=i; j++){ 
      char ch= (char)(j+64);
      printf("%c", ch);
    }
    for(int k=1; k<=i-1; k++){ 
      char ch= (char)(a+64);
      printf("%c",ch);
      a--;
    }
    printf("\n");
  }

  return 0;
}
