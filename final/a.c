#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int A[1000], B[1000], C[1000];

        for (int i = 0; i < n; i++) {
            scanf("%d", &A[i]);
            B[i] = A[i];
        }

        qsort(B, n, sizeof(int), compare);

        for (int i = 0; i < n; i++) {
            C[i] = abs(A[i] - B[i]);
            printf("%d ", C[i]);
        }
        printf("\n");
    }

    return 0;
}