#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

static void swap_int(int *a, int *b) {
    if (a == NULL || b == NULL) {
        return;
    }

    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubble_sort_int(int arr[], size_t n) {
    if (arr == NULL || n < 2) {
        return;
    }

    for (size_t pass = 0; pass < n - 1; ++pass) {
        bool swapped = false;

        for (size_t i = 0; i < n - 1 - pass; ++i) {
            if (arr[i] > arr[i + 1]) {
                swap_int(&arr[i], &arr[i + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;  // early stopping
        }
    }
}

void print_array_int(const int arr[], size_t n) {
    if (arr == NULL) {
        return;
    }

    for (size_t i = 0; i < n; ++i) {
        printf("%d", arr[i]);
        if (i + 1 < n) {
            printf(" ");
        }
    }
    printf("\n");
}

int main(void) {
    int arr[] = {5, 1, 4, 2, 8};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting: ");
    print_array_int(arr, n);

    bubble_sort_int(arr, n);

    printf("After sorting:  ");
    print_array_int(arr, n);

    return 0;
}