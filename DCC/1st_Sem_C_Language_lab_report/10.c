//reverse order.............
#include<stdio.h>
main()
{
  long int a,r,s=0;
  printf("integer input= ");
  scanf("%ld",&a);
  printf("\nreverse form = ");
    while(a!=0)
    {
      r= a%10;
      printf("%ld",r);
      s=s+r;
      printf("\nsum=%ld", s);
      a=a/10;
      }
 printf("\nsum=%ld", s);
 }
