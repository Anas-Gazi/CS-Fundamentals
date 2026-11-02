// factorial of n (n!) = 1 * 2 * 3 * 4....n
/* C Program to Find Factorial of a Number Using For Loop */
#include <stdio.h>

int main()
{
  int i, Number;
  long Factorial = 1;

  printf("\n Please Enter any number to Find Factorial\n");
  scanf("%d", &Number);

  for (i = 1; i <= Number; i++)
   {
     Factorial = Factorial * i;
   }
 printf("%d",i);
  printf("\nFactorial of %d = %d\n", Number, Factorial);

  return 0;
}
/*
User entered an integer in the above example for the factorial program in c is 4

First Iteration
i = 1, Factorial = 1 and Number = 4 – It means (i <= Number) is True
Factorial = Factorial * i;
Factorial = 1 *1 = 1
i++ means i will become 2

Second Iteration
i = 2, Factorial = 1 and Number = 4 – It means (i <= Number) is True
Factorial = Factorial * i;
Factorial = 1 *2 = 2
i++ means i will become 3
Third Iteration
i = 3, Factorial = 2 and Number = 4 – It means (i <= Number) is True
Factorial = Factorial * i;
Factorial = 2 *3 = 6
i++ means I will become 4

Fourth Iteration
i = 4, Factorial = 6 and Number = 4 – It means (i <= Number) is True
Factorial = Factorial * i;
Factorial = 6 * 4 = 24

i++ means i will become 5 – It means (i <= Number) is False. So, For loop will terminate.
*/
