#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100];

    printf("Enter first string: ");
    gets(str1);   // for simplicity (unsafe in real use, but fine for beginners)
    printf("Enter second string: ");
    gets(str2);

    // Length
    printf("\nLength of str1 = %d", (int)strlen(str1));
    printf("\nLength of str2 = %d", (int)strlen(str2));

    // Copy
    strcpy(str3, str1);
    printf("\nCopy of str1 into str3 = %s", str3);

    // Concatenation
    strcat(str1, str2);
    printf("\nConcatenation of str1 and str2 = %s", str1);

    // Comparison
    if(strcmp(str1, str2) == 0)
        printf("\nstr1 and str2 are equal");
    else
        printf("\nstr1 and str2 are not equal");

    // Reverse
    strrev(str2);   // Note: strrev is compiler dependent (works in Turbo C, not standard C)
    printf("\nReverse of str2 = %s\n", str2);

    return 0;
}
