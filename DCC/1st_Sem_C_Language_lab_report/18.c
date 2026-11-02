#include<stdio.h>

int main()
{
int temp,data[8]={10,13,14,21,54,12,20,65},pass=1,k=0;

printf("Before sorting we had\n");
for(k=0;k<8;k++)
    printf(" %d",data[k]);
bubblesort(data,8);


printf("\nAfter sorting in ascending order we have\n");
for(k=0;k<8;k++)
    printf(" %d",data[k]);
return 0;
}

void bubblesort(int data[],int n)
{
  int temp,pass=1,k=0;

  for(pass=1;pass<n;pass++)
{
    for(k=0;k<(n-pass);k++)
    {
        if(data[k]>data[k+1])
        {
            temp=data[k];
            data[k]=data[k+1];
            data[k+1]=temp;
        }
    }
}
}
