#include <stdio.h>
#include <math.h>
#include "array.h"

int read_array(double arr[]) {
    int n;

    if (scanf("%d", &n) != 1 || n < 1 || n > 8) {
        return -1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%lf", &arr[i]) != 1) {
            return -1;
        }
    }

    return n;
}

void replace_abs(int n, double arr[]) {
    for (int i = 0; i < n; i++) {
        arr[i] = fabs(arr[i]);
    }
}

int remove_even(int n, double arr[]) {
    int cur = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            arr[cur] = arr[i];
            cur++;
        }
    }

    return cur;
}

int insert_zero(int n, double arr[]) {
    arr[n] = 0;
    return n + 1;
}

void print_array(int n, const double arr[]) {
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%.3lf", arr[i]);
    }

    printf("\n");
}