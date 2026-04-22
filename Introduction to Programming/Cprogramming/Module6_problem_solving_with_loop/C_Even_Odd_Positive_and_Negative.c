#include <stdio.h>
int main()
{

  int n;
  int x;
      int even=0;
    int odd=0;
    int pos=0;
    int neg=0;
  scanf("%d", &n);
  for (int i = 1; i <=n; i++)
  {
    scanf("%d", &x);

      if (x % 2 == 0)
      {
        even++;
      }
      else
      {
        odd++;
      }
      if (x > 0)
      {
        pos++;
      }
      else if(x<0)
      {
        neg++;
      }

  }
    printf("Even: %d", even);
    printf("\nOdd: %d", odd);
    printf("\nPositive: %d", pos);
    printf("\nNegative: %d", neg);

  return 0;
}