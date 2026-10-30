#include <stdio.h>
#include "array.h"

int main(void) {
    double A[CAPACITY];
    int n;

    n = read_array(A);

    if (n == -1) {
        printf("ошибка ввода\n");
        return 1;
    }

    replace_abs(n, A);

    n = remove_even(n, A);

    if (n == 0) {
        printf("массив пуст\n");
        return 0;
    }

    n = insert_zero(n, A);

    print_array(n, A);

    return 0;
}