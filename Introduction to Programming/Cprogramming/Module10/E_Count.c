#include<stdio.h>
#include<string.h>
int main(){

  char s[1000001];
  scanf("%s",s);
  int count =0;
  for(int i=0;i<strlen(s);i++){ // strlen(s) is used to get the length of the string s. It returns the number of characters in the string, excluding the null terminator '\0'. The loop iterates from 0 to the length of the string, allowing us to access each character in the string using s[i].
   count+=s[i]-48 ; // '0' // 48 is the ASCII value of the character '0'. By subtracting 48 from the ASCII value of a digit character, we can convert it to its corresponding integer value. For example, if s[i] is '5', then s[i] - 48 will give us 5 as an integer. This allows us to sum up the integer values of the characters in the string.
  }
   printf("%d",count);

  return 0;
}
// This code reads a string of digits from the user, calculates the sum of the integer values of those digits, and prints the result. The loop iterates through each character in the string, converts it to its integer value by subtracting 48 (the ASCII value of '0'), and adds it to the count variable. Finally, it prints the total count.