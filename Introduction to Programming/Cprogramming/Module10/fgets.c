#include<stdio.h>
int main(){

  char s[50];
  fgets(s,25,stdin); // Reads a string from the user, allowing for spaces and limiting input to 25 characters
  printf("%s",s);

  return 0;
}

// fgets() is used to read a string from the user. It takes three parameters: the string variable, the maximum number of characters to read, and the input stream (usually stdin). It reads until a newline character is encountered or until the specified number of characters is read, whichever comes first. The newline character is included in the string if it is read.