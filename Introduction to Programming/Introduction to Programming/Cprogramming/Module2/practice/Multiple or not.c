#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a%b ==0 || b%a==0){
        printf("Yes");
    }else{
        printf("No");
    }
}
//This code takes two integer inputs from the user and checks if one of the numbers is a multiple of the other. If either a is a multiple of b or b is a multiple of a, it prints "Yes". Otherwise, it prints "No".
//For example, if the user inputs 10 and 5, the output will be "Yes" because 10 is a multiple of 5. If the user inputs 7 and 3, the output will be "No" because neither number is a multiple of the other.