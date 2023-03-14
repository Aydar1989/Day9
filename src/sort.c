#include <math.h>
#include <stdio.h>
#define NMAX 10

int input(int *a);
void sort(int *a);
void output(int *a);
// void quick_sort(int *a, int first, int last);

int main() {
    int data[NMAX];
    int x = input(data);
    if (x == 1) {
        printf("n/a\n");
    } else {
        // quick_sort(data, first, last);
        sort(data);
        output(data);
    }
    return 0;
}

int input(int *a) {
    int y, x;
    int z = 0;
    // x = scanf("%d.%d", n, &y);
    // if (x != 1 || *n <= 0 || *n > NMAX)
    //{
    //     z = 1;
    // } else {
    for (int *p = a; p - a < NMAX; p++) {
        x = scanf("%d.%d", p, &y);
        if (x != 1) {
            z = 1;
        }
    }
    //}
    return z;
}

void output(int *a) {
    for (int *p = a; p - a < NMAX - 1; p++) {
        printf("%d ", *p);
    }
    printf("%d\n", *(a + NMAX - 1));
}

void sort(int *a) {
    int x;
    for (int *p = a; p - a < NMAX - 1; p++) {
        for (int *i = a; i - a < NMAX - 1; i++) {
            if (*i > *(i + 1)) {
                x = *(i + 1);
                *(i + 1) = *i;
                *i = x;
            }
        }
    }
}

// void quick_sort(int *a, int first, int last) {
//    if (first < last) {
//       int left = first, right = last, middle = a[(left + right) / 2];
//      do
//      {
//       while (a[left] < middle)
//         left++;
//      while (a[left] > middle)
//        right--;
//        if (left <= right)
//      {
//       swap(a + left, a + right);
//       left++;
//       right--;
//      }
// } while (left <= right);
//  quick_sort(s_arr, first, right);
//  quick_sort(s_arr, left, last);
//  }
//}