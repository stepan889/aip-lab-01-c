#ifndef ARRAY_H
#define ARRAY_H

#define CAPACITY 9

/* Читает длину и элементы. Возвращает длину или -1 при ошибке. */
int read_array(double arr[]);

/* Заменяет элементы на модули. */
void replace_abs(int n, double arr[]);

/* Удаляет элементы с чётными индексами + новая длину. */
int remove_even(int n, double arr[]);

/* Добавляет ноль в конец + новая длина*/
int insert_zero(int n, double arr[]);

/* Выводит элементы с тремя знаками */
void print_array(int n, const double arr[]);

#endif