#include <stdio.h>
#include <stddef.h>   // size_t, ptrdiff_t

/*
 * exact search:
 * return index if found, otherwise -1
 */
ptrdiff_t binary_search_exact(const int *arr, size_t n, int target) {
    if (arr == NULL || n == 0) {
        return -1;
    }

    ptrdiff_t left = 0;
    ptrdiff_t right = (ptrdiff_t)n - 1;

    while (left <= right) {
        ptrdiff_t mid = left + (right - left) / 2;
        int value = arr[mid];

        if (value == target) {
            return mid;
        } else if (value < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

/*
 * lower_bound:
 * return the first index i such that arr[i] >= target
 * if no such index exists, return n
 */
size_t binary_search_lower_bound(const int *arr, size_t n, int target) {
    size_t left = 0;
    size_t right = n;   // [left, right)

    while (left < right) {
        size_t mid = left + (right - left) / 2;

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return left;
}

/*
 * upper_bound:
 * return the first index i such that arr[i] > target
 * if no such index exists, return n
 */
size_t binary_search_upper_bound(const int *arr, size_t n, int target) {
    size_t left = 0;
    size_t right = n;   // [left, right)

    while (left < right) {
        size_t mid = left + (right - left) / 2;

        if (arr[mid] <= target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return left;
}

/*
 * first occurrence of target
 * return index if found, otherwise -1
 */
ptrdiff_t binary_search_first(const int *arr, size_t n, int target) {
    if (arr == NULL || n == 0) {
        return -1;
    }

    size_t pos = binary_search_lower_bound(arr, n, target);

    if (pos < n && arr[pos] == target) {
        return (ptrdiff_t)pos;
    }

    return -1;
}

/*
 * last occurrence of target
 * return index if found, otherwise -1
 */
ptrdiff_t binary_search_last(const int *arr, size_t n, int target) {
    if (arr == NULL || n == 0) {
        return -1;
    }

    size_t pos = binary_search_upper_bound(arr, n, target);

    if (pos > 0 && arr[pos - 1] == target) {
        return (ptrdiff_t)(pos - 1);
    }

    return -1;
}

void print_array(const int *arr, size_t n) {
    printf("[");
    for (size_t i = 0; i < n; ++i) {
        printf("%d", arr[i]);
        if (i + 1 < n) {
            printf(", ");
        }
    }
    printf("]");
}

void run_test(const int *arr, size_t n, int target) {
    print_array(arr, n);
    printf(", target = %d\n", target);

    ptrdiff_t exact = binary_search_exact(arr, n, target);
    ptrdiff_t first = binary_search_first(arr, n, target);
    ptrdiff_t last  = binary_search_last(arr, n, target);
    size_t lb = binary_search_lower_bound(arr, n, target);
    size_t ub = binary_search_upper_bound(arr, n, target);

    printf("  exact       = %td\n", exact);
    printf("  first       = %td\n", first);
    printf("  last        = %td\n", last);
    printf("  lower_bound = %zu\n", lb);
    printf("  upper_bound = %zu\n", ub);

    if (lb < n) {
        printf("  arr[lb]     = %d\n", arr[lb]);
    } else {
        printf("  arr[lb]     = <out of range>\n");
    }

    if (ub < n) {
        printf("  arr[ub]     = %d\n", arr[ub]);
    } else {
        printf("  arr[ub]     = <out of range>\n");
    }

    printf("\n");
}

int main(void) {
    int arr1[] = {1, 3, 5, 7, 9, 11, 13};
    int arr2[] = {1, 2, 2, 2, 4, 4, 6, 8};
    int arr3[] = {5};
    int arr4[] = {};

    run_test(arr1, sizeof(arr1) / sizeof(arr1[0]), 7);
    run_test(arr1, sizeof(arr1) / sizeof(arr1[0]), 6);

    run_test(arr2, sizeof(arr2) / sizeof(arr2[0]), 2);
    run_test(arr2, sizeof(arr2) / sizeof(arr2[0]), 4);
    run_test(arr2, sizeof(arr2) / sizeof(arr2[0]), 3);

    run_test(arr3, sizeof(arr3) / sizeof(arr3[0]), 5);
    run_test(arr3, sizeof(arr3) / sizeof(arr3[0]), 1);

    run_test(arr4, 0, 10);

    return 0;
}