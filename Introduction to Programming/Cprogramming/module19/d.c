#include <stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    for (int x = 0; x < t; x++) {

        int n;
        scanf("%d", &n);

        int a[n], b[n];


        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (b[j] > b[j + 1]) {
                    int temp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = temp;
                }
            }
        }
        int c[n];
        for (int i = 0; i < n; i++) {
           c[i]= a[i]-b[i];
           printf("%d ", c[i]);
        }
    }

    return 0;
}