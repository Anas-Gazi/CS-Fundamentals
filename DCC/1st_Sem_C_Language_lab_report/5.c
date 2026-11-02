#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a == 0) {
        printf("This is not a quadratic equation.\n");
        return 0;
    }

    d = b*b - 4*a*c;  // discriminant

    if(d > 0) {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and different.\n");
        printf("Root1 = %.2f , Root2 = %.2f\n", root1, root2);
    }
    else if(d == 0) {
        root1 = root2 = -b / (2*a);
        printf("Roots are real and equal.\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    }
    else {
        realPart = -b / (2*a);
        imagPart = sqrt(-d) / (2*a);
        printf("Roots are complex and different.\n");
        printf("Root1 = %.2f + %.2fi , Root2 = %.2f - %.2fi\n",
               realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
