# Bubble Sort

## 1. Definition

Bubble Sort 是一種基於比較（comparison-based）的排序演算法，
透過不斷比較相鄰元素並在順序錯誤時交換它們。

每一輪（pass）結束後，最大的元素會被「推」到陣列的最後面，
就像氣泡往上浮一樣（bubble up）。

![Bubble sort](../../images/Bubble%20sort.png)

---

## 2. When to Use

- 適合用來學習排序的基本概念
- 實作簡單、容易理解
- 不適合用於大型資料（效率差）

---

## 3. Approach

1. 重複掃描整個陣列
2. 比較相鄰元素
3. 若順序錯誤則交換
4. 每一輪會把「目前最大的元素」移到最後

---

## 4. Complexity Analysis

- Time Complexity：
  - Best: O(n)（有 early stopping）
  - Average: O(n²)
  - Worst: O(n²)

- Space Complexity：
  - O(1)（in-place）

---

## 5. Edge Cases

- 空陣列（empty array）
- 單一元素（single element）
- 已排序陣列（already sorted）
- 含有重複元素（duplicates）

---

## 6. Optimization

常見優化方式是加入 `swapped` flag：

如果某一輪沒有發生任何交換，
代表陣列已經排序完成，可以提前結束。

---

## 7. Implementation（C）

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

## 8. Insight

- Bubble Sort 是一種「局部調整（local）」累積成「整體排序（global）」的過程
- 每次只處理兩個元素，但經過多次操作後，整體會變成有序，每一步的最佳解會變成整體最佳，像是 `Greedy` 、 `DP` 、 `Machine Learning(Gradient Descent)`
