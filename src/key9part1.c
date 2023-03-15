#include <stdio.h>
#define NMAX 10

int input(int *a, int *n);
void output(int *a, int n);
int sum_numbers(int *a, int n);
int find_numbers(int *a, int n, int number, int *numbers);

int main() {
    int n;
    int data[NMAX];
    int x = input(data, &n);
    if (x == 1) {
        printf("n/a\n");
    } else {
        int z = sum_numbers(data, n);
        printf("%d\n", z);
        int numbers[NMAX];
        int c = find_numbers(data, n, z, numbers);
        output(numbers, c);
    }
    return 0;
}

int input(int *a, int *n) {
    int y, x;
    int z = 0;
    x = scanf("%d.%d", n, &y);
    if (x != 1 || *n <= 0 || *n > NMAX) {
        z = 1;
    } else {
        for (int *p = a; p - a < NMAX; p++) {
            x = scanf("%d.%d", p, &y);
            if (x != 1) {
                z = 1;
            }
        }
    }
    return z;
}

void output(int *a, int n) {
    for (int *p = a; p - a < n - 1; p++) {
        printf("%d ", *p);
    }
    printf("%d\n", *(a + n - 1));
}

int sum_numbers(int *a, int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            sum = sum + a[i];
        }
    }

    return sum;
}

int find_numbers(int *a, int n, int number, int *numbers) {
    int f = 0;
    for (int *p = a; p - a < n; p++) {
        if (*p != 0 && number % *p == 0) {
            numbers[f] = *p;
            f = f + 1;
        }
    }
    return f;
}
