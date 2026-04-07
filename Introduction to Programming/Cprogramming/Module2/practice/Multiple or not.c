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
//This program checks if either 'a' is a multiple of 'b' or 'b' is a multiple of 'a'. If either condition is true, it prints "Yes"; otherwise, it prints "No". 