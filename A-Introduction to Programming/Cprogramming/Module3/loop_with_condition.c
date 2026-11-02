#include<stdio.h>
int main(){
  for(int i =1; i<=10; i++){
    if(i%2==0){
      printf("%d - Even\n",i);
    }
    else{
      printf("%d - Odd\n",i);
    }
  }
}
//This program uses a for loop to iterate through the numbers from 1 to 10. For each number, it checks if the number is even or odd using the modulus operator (%). If the number is even (i % 2 == 0), it prints the number followed by " - Even". If the number is odd, it prints the number followed by " - Odd".