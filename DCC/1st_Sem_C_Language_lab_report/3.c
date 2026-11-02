#include <stdio.h>
int main() {
    int r,num;
    printf("Enter an integer: ");
    scanf("%d", &num);
r=num % 2;
    // True if num is perfectly divisible by 2
    if(r == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);

    return 0;
}
