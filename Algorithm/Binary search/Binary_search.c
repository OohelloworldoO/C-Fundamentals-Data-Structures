#include <stdio.h>
int binary_search(int arr[], int n, int target);

int main(void) {
    int arr[] = {1, 3, 5, 7, 9, 11}; // 已經排列好的陣列
    int n = sizeof(arr) / sizeof(arr[0]); //陣列長度

    int target = 7; // 目標數字

    int result = binary_search(arr, n, target);

    if (result != -1) {
        printf("Found at index %d\n", result);
    } else {
        printf("Not found\n");
    }

    return 0;
}

int binary_search(int arr[], int n, int target) {
    int left = 0; // 左起始
    int right = n - 1; // 右尾端

    while (left <= right) {
        int mid = left + (right - left) / 2; // 取中間值

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}