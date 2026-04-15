# Bubble Sort

## 1. Definition

Bubble Sort is a simple comparison-based sorting algorithm that repeatedly compares adjacent elements and swaps them if they are in the wrong order.

After each pass, the largest element "bubbles up" to its correct position at the end of the array.

---

## 2. When to Use

- Suitable for learning sorting fundamentals
- Easy to implement and understand
- Not efficient for large datasets

---

## 3. Approach

1. Iterate through the array multiple times
2. Compare adjacent elements
3. Swap if they are in the wrong order
4. After each iteration, the largest unsorted element moves to the end

---

## 4. Complexity Analysis

- Time Complexity:
  - Best: O(n) (if optimized with early stopping)
  - Average: O(n²)
  - Worst: O(n²)

- Space Complexity:
  - O(1) (in-place)

---

## 5. Edge Cases

- Empty array
- Single element array
- Already sorted array
- Array with duplicate values

---

## 6. Optimization

A common optimization is to add a flag to detect whether any swaps occurred.

If no swaps occur in a pass, the array is already sorted, and we can stop early.

---

## 7. Implementation (C)

```c
#include<stdio.h>

void bubble_sort(int v[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(v[j] > v[j+1]) {
                int t = v[j];
                v[j] = v[j+1];
                v[j+1] = t;
            }
        }
    }
}
```
