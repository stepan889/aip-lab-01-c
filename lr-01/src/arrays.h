#ifndef ARRAYS_H
#define ARRAYS_H

#define CAPACITY 20

/* Читает длину от 1 до CAPACITY; возвращает длину или -1 при ошибке. */
int read_length(void);

/* Читает n элементов; возвращает n или -1 при ошибке. */
int read_array(int n, double arr[]);

/* Читает a, x, h; возвращает 3 при успехе или -1 при ошибке. */
int read_params(double *a, double *x, double *h);

/* Строит B по формуле варианта 6; ничего не возвращает. */
void build_b(int m, double B[], double a, double x, double h);

/* Возвращает индекс последнего отрицательного элемента или -1, если его нет. */
int find_last_negative(int n, const double arr[]);

/* Удаляет положительные элементы левее последнего отрицательного.
   Возвращает новую длину или -2, если отрицательного элемента нет. */
int remove_left(int n, double arr[]);

/* Вставляет копию A[1] в позицию 0.
   Возвращает новую длину, -1 при заполненном массиве или -2 при n < 2. */
int copy_first_item(int n, double arr[]);

/* Ограничивает значения диапазоном [-10; 10]; ничего не возвращает. */
void replace_mod10(int n, double arr[]);

/* Печатает n элементов с тремя знаками после запятой и переводом строки.
   Ничего не возвращает; сообщение о пустом массиве печатает main. */
void print_array(int n, const double arr[]);

#endif
