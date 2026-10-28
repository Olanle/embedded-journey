#include <stdio.h>

/* Returns the largest value in a[0..n-1]. Assumes n >= 1. */
int largest(int *a, int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

/* Reverses a[0..n-1] in place by swapping the ends toward the middle. */
void reverse(int *a, int n) {
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }
}

/* Prints a 5x5 multiplication table. */
void print_table(void) {
    for (int row = 1; row <= 5; row++) {
        for (int col = 1; col <= 5; col++) {
            printf("%4d", row * col);
        }
        printf("\n");
    }
}

int main(void) {
    int a[] = {3, 9, -2, 7, 5};
    int n = sizeof(a) / sizeof(a[0]);

    printf("largest = %d\n", largest(a, n));

    reverse(a, n);
    printf("reversed:");
    for (int i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
    printf("\n\n");

    print_table();
    return 0;
}