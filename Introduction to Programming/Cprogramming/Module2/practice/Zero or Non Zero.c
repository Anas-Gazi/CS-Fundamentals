#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    if(N==0){
        printf("Zero");
    }
    else{
        printf("Non Zero");
    }
    return 0;
}
//This code takes an integer input from the user and checks if it is zero or non-zero. If the input is zero, it prints "Zero". Otherwise, it prints "Non Zero".
//For example, if the user inputs 0, the output will be "Zero". If the user inputs 5, the output will be "Non Zero".