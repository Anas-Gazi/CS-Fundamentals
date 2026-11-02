#include <stdio.h>

int main() {
    int x, y, temp;
    int *px, *py;

    printf("Enter value of X: ");
    scanf("%d", &x);
    printf("Enter value of Y: ");
    scanf("%d", &y);

    px = &x;
    py = &y;

    // swapping using pointers
    temp = *px;
    *px = *py;
    *py = temp;

    printf("After swapping: X = %d, Y = %d\n", x, y);

    return 0;
}
