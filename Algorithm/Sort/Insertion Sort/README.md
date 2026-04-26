# Insertion Sort

## Definition

Insertion Sort 是一種直觀的排序演算法。它的工作原理是透過構建有序序列，對於未排序數據，`在已排序序列中`從後向前掃描，找到相應位置並插入。

核心概念：
將陣列分為「已排序」與「未排序」兩部分，每次抓取未排序的第一個元素（key），插入到已排序部分的正確位置。

![Insertion sort](../../images/Insertion%20sort.png)

## When to Use

適用於以下情況：

- 資料量較小（Small datasets）
- 資料「幾乎已排序」（Nearly sorted data）
- 需要 Stable Sort（穩定排序，即相等元素的相對順序不變）
- 線上演算法（Online algorithm，可以邊接收資料邊排序）

## Approach

基本流程：

從 index 1 開始（假設 index 0 已排序）。

取出當前值作為 key。

從後向前比較已排序部分的元素。

若已排序元素大於 key，則將該元素向右移動一格（Right Shift）。

重複步驟 4 直到找到小於或等於 key 的位置，將 key 插入。

1. 從 index i = 1 開始比大小
2. 取得當前 i 作為 key (start from i = 1)，`j = i -1` 為當前key的前一格
3. 向左比較以排序的 value
4. 若已排序 value > key，則 Right shift 並且 j-- (往前移動一格繼續比較)
5. 重覆值到 j-- 小於等於 key 此時 j+1 再將 key 插入

## Complexity Analysis

Time Complexity：Best Case: $O(n)$（當資料已完全排序，只需 $n-1$ 次比較）Average/Worst Case: $O(n^2)$Space Complexity：$O(1)$（In-place sorting）

## Edge Cases

- 陣列已經排序：效率最高。
- 陣列反向排序：效率最低（每次都要移到最前面）。
- 陣列含有大量重複值：插入排序是穩定的，不會改變順序。

## Common Mistakes

- 邏輯混淆：誤寫成 Bubble Sort（兩兩交換）而非 Shift（位移）。
- Index Out of Bounds：在向左搜尋時，忘記檢查 j >= 0 的邊界。
- 遺失 Key 值：在位移過程中直接覆蓋了 arr[i]，卻沒有先用變數存起來。

## Implementation

```
void Insertion_sort(array *a)
{
    int n = a->top;
    for(int i = 0; i < n; i++)
    {
        int
    }
}
```

## Mistake / Misunderstand

Logic Error:

- 誤區：原本寫成 for(j=0; j < i-1; j++) 並進行兩兩交換。
- 導正：這其實是 Bubble Sort 的變體。真正的插入排序應該是從 i 往回（j--）搜尋，並使用「位移（Shift）」而非頻繁「交換（Swap）」。

scanf 的緩衝區陷阱:

- 誤區：scanf("%d ", &val) 在 %d 後面加了空格。
- 後果：導致程式會不斷等待直到讀入一個「非空白字元」，使後續的 scanf 看起來像被跳過了。
- 修正：除非有特殊需求，否則讀取數字應使用 "%d"。

指標與計數 (Struct Management):

- 誤區：push 函式中 index 管理混亂（如 top+1）。
- 導正：定義 top 為「下一個可用的 index」或「當前元素總數」會讓邏輯最清晰。

## Insight

Insertion Sort 就像我們在玩撲克牌時整理手牌的過程：左手拿著已排好的牌，右手抽一張新牌，然後在左手中從右往左找位置插進去。  
雖然它的平均複雜度是 $O(n^2)$，但在處理小規模數據時，它通常比 $O(n \log n)$ 的 Quick Sort 還要快，因為它的常數項極小且不需遞迴。
