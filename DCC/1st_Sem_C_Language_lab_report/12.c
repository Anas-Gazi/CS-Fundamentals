#include<stdio.h>
int main()
{
int item,data[7]={11,13,14,10,54,12,20},loc=-1,k;
printf("searching item=");
scanf("%d",&item);
for(k=0;k<7;k++)
{
    if (data[k]==item)
       {
           loc=k+1;
           break;
        }
}
if (loc>=0)
printf("Search is successful and data is found in %d location",loc);
else
    printf("search is unsuccessful");
return 0;
}
