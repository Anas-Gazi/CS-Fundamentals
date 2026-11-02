#include <stdio.h>
int main()
{
  int tk;
  scanf("%d", &tk);
  if (tk >= 5000)
  {
    printf("I will go to Cox's Bazar\n");

    if (tk >= 10000)
    {
      printf("I will go to Saint Martin\n");
    }
    else
    {
      printf("I will not go to Saint Martin\n");
    }
  }
  else
  {
    printf("I will not go anywhere\n");
  }
}
