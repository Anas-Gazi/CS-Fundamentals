#include<stdio.h>
#include<string.h>
int main(){

  char s[15],p[15];
  scanf("%s%s",&s,&p);
  printf("%d %d\n",strlen(s),strlen(p));
  printf("%s%s\n",s,p);

  char temp=s[0];
  s[0] = p[0];
  p[0] =temp;

  printf("%s %s", s,p);

  return 0;
}