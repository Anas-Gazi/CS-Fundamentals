/*	Write a C program to reverse the elements of an array and
 also display sum of elements of that array */
#include<stdio.h>

int main()
{
   int i, arr[10], sum=0, num;
   //int arr[10]={4,5,8,9,6};

   printf("\nEnter no of elements :");
   scanf("%d", &num);
   //Reading values into Array
   printf("\nEnter the values :");
   for (i = 0; i < num; i++)
   {
      scanf("%d", &arr[i]);
       sum = sum + arr[i];
    }
   //Printing all elements of array
   for (i = num-1; i >=0; i--)
      printf("\na[%d]= %d", i, arr[i]);
   //Printing of total
   printf("\n\nSum=%d", sum);

   return (0);
}
