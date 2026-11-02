#include<stdio.h>
#include<string.h>
int main(){

  char s[1000005];
   scanf("%s",&s);
   int count =0;
  for(int i=0; i<strlen(s); i++){
  count +=s[i]-'0';
  
  }
  printf("%d", count);

  return 0;
}