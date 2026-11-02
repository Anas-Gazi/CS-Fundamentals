#include<stdio.h>
#include<string.h>
int main(){

  int t;
  char s[10005];
  scanf("%d",&t);

  for(int j=0;j<t;j++){

  int cap=0;
  int smal=0;
  int num=0;

  scanf("%s", s);

  for(int i=0; i<strlen(s); i++){
    if(s[i] >='A' && s[i]<='Z'){
      cap++;
    } else if(s[i] >='a' && s[i]<='z'){
      smal++;
    }
    else if(s[i] >='0' && s[i]<='9'){
      num++;
    }
  }
    printf("%d %d %d\n", cap, smal, num);
 
  }

  return 0;
}