#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n;
    scanf("%d",&n);
    
    if(n>1000){
        printf("I will buy Punjabi\n");
        
        if(n>=1500){
            printf("I will buy new shoes\nAlisa will buy new shoes\n");
        }
    } else{
        printf("Bad luck!\n");
    }
    return 0;
}

//this is a shopping program. It takes an integer input from the user and checks if it is greater than 1000. If it is, it prints "I will buy Punjabi". Then it checks if the input is greater than or equal to 1500. If it is, it prints "I will buy new shoes" and "Alisa will buy new shoes". If the input is not greater than 1000, it prints "Bad luck!".