#include<stdio.h>
int main(){

  int t;
  scanf("%d",&t);
  int x,y;
  for(int i=0; i<t;i++){
    scanf("%d %d", &x,&y);

    int sum=0;
    if(x>y){
      for(int i=y+1;i<x; i++){
        if(i%2 !=0){
          sum +=i;
        }
      }
    }
    else if (x<y){
      for(int i=y-1;i>x; i--){
        if(i%2 !=0){
          sum +=i;
        }
      }
    }
    else if(x==y){
      sum =0;
    }

  printf("%d\n", sum);
}
return 0;
}