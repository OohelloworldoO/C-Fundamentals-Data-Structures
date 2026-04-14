# Binary Search（二分搜尋）

## 1. Definition（定義）

Binary Search 是一種在「已排序資料（sorted array）」中，
透過每次將搜尋範圍對半縮小（divide search space），來尋找目標值的演算法。

核心概念：
每次比較中間值（mid），將問題規模縮小一半。

---

## 2. When to Use（使用時機）

適用於以下情況：

- 資料已排序（sorted array）
- 或具有單調性（monotonic property）
- 搜尋空間可以逐步縮小（search space reduction）

常見應用：

- 搜尋目標值
- 找最小可行解（minimum feasible solution）
- optimization 問題（answer space search）

---

## 3. Approach（解題思路）

基本流程：

1. 設定左右邊界（left, right）
2. 計算中間位置（mid）
3. 比較 target 與 arr[mid]
4. 縮小搜尋範圍（更新 left / right）

---

## 4. Complexity Analysis（複雜度分析）

- Time Complexity：O(log n)
- Space Complexity：O(1)

原因：
每次搜尋範圍縮小一半

---

## 5. Edge Cases（邊界情況）

實務中必須考慮：

- 空陣列（empty array）
- 單一元素（single element）
- target 不存在
- 重複元素（duplicates）
- overflow（mid 計算錯誤）

---

## 6. Common Mistakes（常見錯誤）

- 使用 `(left + right) / 2` → 可能 overflow
- while 條件寫錯（造成 infinite loop）
- 更新邊界錯誤（left / right 沒有正確移動）
- 忘記處理找不到的情況

---

## 7. Variants（變形題）

常見變形：

- 找第一個 >= target（lower bound）
- 找最後一個 <= target（upper bound）
- 搜尋插入位置（search insert position）
- rotated sorted array

---

## 8. Pattern Recognition（題型辨識）

遇到以下特徵，可考慮使用 Binary Search：

- 「已排序」
- 「答案具有單調性（monotonic）」
- 「可以用 yes / no 判斷條件」

---

## 9. Implementation（C）

```c
int binary_search(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }

    return -1;
}
```

## 10. Practice Log

- LeetCode 704 → 基本 binary search
- LeetCode 35 → lower bound
- LeetCode 33 → rotated array

## 11. Mistakes / Notes（錯誤紀錄）

- 忘記使用 `left <= right`
- mid 計算錯誤導致 overflow
- 邊界更新錯誤導致 infinite loop

## 12. Insight

Binary Search 的本質不是「搜尋數值」，而是：對「單調函數（monotonic function）」進行搜尋  
可應用於：

- optimization 問題
- answer space search
- threshold decision 問題
