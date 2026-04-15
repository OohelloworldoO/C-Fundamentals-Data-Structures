#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef int (*cmp_fn)(const void *, const void *);

static void swap_bytes(void *a, void *b, size_t size) {
    unsigned char *pa = a;
    unsigned char *pb = b;

    for (size_t i = 0; i < size; ++i) {
        unsigned char tmp = pa[i];
        pa[i] = pb[i];
        pb[i] = tmp;
    }
}

void bubble_sort(void *base, size_t n, size_t size, cmp_fn cmp) {
    if (base == NULL || cmp == NULL || n < 2 || size == 0) {
        return;
    }

    unsigned char *arr = base;

    for (size_t pass = 0; pass < n - 1; ++pass) {
        bool swapped = false;

        for (size_t i = 0; i < n - 1 - pass; ++i) {
            void *left  = arr + i * size;
            void *right = arr + (i + 1) * size;

            if (cmp(left, right) > 0) {
                swap_bytes(left, right, size);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

int int_cmp(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

void print_int_array(const int arr[], size_t n) {
    for (size_t i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int arr[] = {5, 1, 4, 2, 8};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    print_int_array(arr, n);
    bubble_sort(arr, n, sizeof(arr[0]), int_cmp);
    print_int_array(arr, n);

    return 0;
}