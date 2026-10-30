#include <stdio.h>
#include <math.h>
#include "arrays.h"

int read_length(void) {
    int n;

    if (scanf("%d", &n) != 1 || n < 1 || n > CAPACITY) {
        return -1;
    }
    return n;
}

int read_array(int n, double arr[]) {
    for (int i = 0; i < n; i++) {
        if (scanf("%lf", &arr[i]) != 1) {
            return -1;
        }
    }
    return n;
}

int read_params(double *a, double *x, double *h) {
    if (scanf("%lf %lf %lf", a, x, h) != 3) {
        return -1;
    }
    return 3;
}

void build_b(int m, double B[], double a, double x, double h) {
    for (int i = 0; i < m; i++) {
        B[i] = 5.5 * sin(i * h) + cos(a * x + i * h);
    }
}

int find_last_negative(int n, const double arr[]) {
    int last = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            last = i;
        }
    }
    return last;
}

int remove_left(int n, double arr[]) {
    int last = find_last_negative(n, arr);
    int cur = 0;

    if (last == -1) {
        return -2;
    }

    
    for (int i = 0; i < n; i++) {
        if (i >= last || arr[i] <= 0) {
            arr[cur] = arr[i];
            cur++;
        }
    }
    return cur;
}

int copy_first_item(int n, double arr[]) {
    double value;

    if (n == CAPACITY) {
        return -1;
    }
    if (n < 2) {
        return -2;
    }

    
    value = arr[1];
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = value;
    return n + 1;
}

void replace_mod10(int n, double arr[]) {
    for (int i = 0; i < n; i++) {
        if (arr[i] > 10) {
            arr[i] = 10;
        } else if (arr[i] < -10) {
            arr[i] = -10;
        }
    }
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
