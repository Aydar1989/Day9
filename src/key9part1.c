/*------------------------------------
        Здравствуй, человек!
        Чтобы получить ключ
        поработай с комментариями.
-------------------------------------*/

#include <stdio.h>
#define NMAX 10

int input(int *buffer, int *length);
void output(int *buffer, int length);
int sum_numbers(int *buffer, int length);
int find_numbers(int *buffer, int length, int number, int *numbers);

/*------------------------------------
        Функция получает массив данных
        через stdin.
        Выдает в stdout особую сумму
        и сформированный массив
        специальных элементов
        (выбранных с помощью найденной суммы):
        это и будет частью ключа
-------------------------------------*/
int main() {
    int data[NMAX], y;
    int x = input(data, &y);
    if (x == 1) {
        printf("n/a\n");
    } else {
        // output (data, y);
        int z = sum_numbers(data, y);
        printf("%d", z);
        // find_numbers(data, int length, int number, int *numbers)
    }
    return 0;
}

int input(int *buffer, int *length) {
    int y, x;
    int z = 0;
    x = scanf("%d.%d", length, &y);
    if (x != 1 || *length <= 0 || *length > NMAX) {
        z = 1;
    } else {
        for (int *p = buffer; p - buffer < NMAX; p++) {
            x = scanf("%d.%d", p, &y);
            if (x != 1) {
                z = 1;
            }
        }
    }
    return z;
}

void output(int *buffer, int length) {
    for (int *p = buffer; p - buffer < NMAX - 1; p++) {
        printf("%d ", *p);
    }
    printf("%d\n", *(buffer + length - 1));
}

/*------------------------------------
        Функция должна находить
        сумму четных элементов
        с 0-й позиции.
-------------------------------------*/
int sum_numbers(int *buffer, int length) {
    int sum = 0;

    for (int i = 1; i < length; i++) {
        if (i % 2 == 0) {
            sum = sum + *buffer;
        }
    }

    return sum;
}

/*------------------------------------
        Функция должна находить
        все элементы, на которые нацело
        делится переданное число и
        записывает их в выходной массив.
-------------------------------------*/
// int find_numbers(int *buffer, int length, int number, int *numbers)
//{

// return 0;
// }
