#include<stdio.h>
int main(){

  int t;
  scanf("%d",&t);

  int m1, m2,d;
  for(int i=0;i<t;i++){
  
  scanf("%d%d%d", &m1,&m2,&d);
  int d2= (m1*d)/(m1+m2);
  int d3= d-d2;
  printf("%d\n",d3);
  }
 
  
  return 0;
}