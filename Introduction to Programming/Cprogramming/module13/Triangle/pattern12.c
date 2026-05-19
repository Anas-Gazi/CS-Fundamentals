#include<stdio.h>
int main(){

  int m;
  scanf("%d", &m);
  int n= m*2-1;
  int nsp= n/2;
  int str =1;
  int ml= n/2;
  for(int i=1; i<=n; i++){
    for(int k=1; k<=nsp;k++){
      printf(" ");
    }
    for(int j=1; j<=str; j++){
      if(i%2 ==0){
      printf("-");
      }else{
        printf("#");
      }
      
    }
    
      if(i<=ml){
        nsp--;
        str+=2;
      } else{
        nsp++;
        str-=2;
      }

    printf("\n");
  }

  return 0;
}