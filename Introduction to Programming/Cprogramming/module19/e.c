#include<stdio.h>
int main(){

  int t;
  scanf("%d",&t);
  for(int i=0; i<t; i++){

   long long int m,a,b,c;
  scanf("%lld %lld %lld %lld", &m,&a,&b,&c);
  
  if( m==0){
    printf("0\n");
    continue;
  }

long long x= a*b*c;
if(x ==0){
  printf("-1\n");
continue;
}
if(m %x !=0){
  printf("-1\n");
}else{
  printf("%lld\n",m/x);
}
  }
  return 0;
}
