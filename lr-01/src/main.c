#include <stdio.h>
#include "arrays.h"

int main(void) {
    int n, m, new_length;
    double A[CAPACITY], B[CAPACITY];
    double a, x, h;

    n = read_length();
    if (n == -1 || read_array(n, A) == -1) {
        printf("ошибка ввода\n");
        return 1;
    }

    m = read_length();
    if (m == -1 || read_params(&a, &x, &h) == -1) {
        printf("ошибка ввода\n");
        return 1;
    }

    build_b(m, B, a, x, h);

    printf("A:\n");
    print_array(n, A);
    printf("B:\n");
    print_array(m, B);

    printf("B после удаления:\n");
    new_length = remove_left(m, B);
    if (new_length == -2) {
        printf("операция невозможна\n");
    } else {
        m = new_length;
        if (m == 0) {
            printf("массив пуст\n");
        } else {
            print_array(m, B);
        }
    }

    printf("A после вставки:\n");
    new_length = copy_first_item(n, A);
    if (new_length == -1) {
        printf("нет места для вставки\n");
    } else if (new_length == -2) {
        printf("операция невозможна\n");
    } else {
        n = new_length;
        print_array(n, A);
    }

    replace_mod10(n, A);
    printf("A после изменения:\n");
    print_array(n, A);

    return 0;
}
