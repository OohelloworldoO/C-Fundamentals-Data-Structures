# Algorithm (Data Structures & Algorithms Training)

## 目標（Goal）

目標為建立扎實的資料結構與演算法（Data Structures & Algorithms, DSA）能力，並應用於：

- 技術面試（Technical Interview）
- 問題解決能力（Problem Solving）
- 系統層級程式設計（System-level Programming, C / OS）

核心目標不只是學會演算法，而是：

- 辨識題型（Pattern Recognition）
- 建立解題策略（Solution Design）
- 正確實作（Implementation）
- 清楚表達（Explanation）

---

## 核心概念（Core Concept）

演算法學習不應建立在記憶解法（memorization），而應建立在以下流程：

Problem → Pattern → Solution → Implementation → Explanation

---

## 演算法分類（Algorithm Categories）

- recursion/
- searching/
- binary_search/
- sorting/
  - bubble_sort/
  - selection_sort/
  - insertion_sort/
  - merge_sort/
  - quick_sort/
- divide_and_conquer/
- greedy/
- backtracking/
- dynamic_programming/
- graph_algorithm/
- string_algorithm/
- bit_manipulation/

---

## 題型辨識（Pattern Recognition）

在實務與面試中，大多數問題可歸類為特定模式（pattern）：

| Pattern             | 說明                                    |
| ------------------- | --------------------------------------- |
| Binary Search       | 排序資料或單調性（monotonic condition） |
| Two Pointers        | 配對、區間問題                          |
| Sliding Window      | 子陣列最佳化問題                        |
| DFS / BFS           | 樹與圖的遍歷（tree / graph traversal）  |
| Backtracking        | 排列組合（combination / permutation）   |
| Greedy              | 局部最佳解（local optimal）             |
| Dynamic Programming | 子問題重疊（overlapping subproblems）   |

重點能力為：

能在短時間內判斷題目屬於哪一類問題

---

## 解題流程（Problem-Solving Process）

標準解題流程如下：

1. 理解問題（Understand the problem）
2. 提出暴力解（Brute-force solution）
3. 逐步優化（Optimization）
4. 分析時間與空間複雜度（Time & Space Complexity）
5. 考慮邊界情況（Edge Cases）
6. 撰寫正確且清晰的程式碼（Implementation）

---

## 白板表達能力（Whiteboard Explanation）

在技術面試中，表達能力與實作能力同等重要。

應能清楚描述：

- 解題思路（approach）
- 優化過程（optimization steps）
- 時間複雜度（time complexity）
- 空間複雜度（space complexity）

範例表達方式：

"First, I consider a brute-force solution. Then I optimize it using [algorithm/pattern]. The time complexity is O(n log n), and the space complexity is O(n)."

---

## 邊界條件與除錯（Edge Cases & Debugging）

Edge cases 指容易被忽略但會導致錯誤的特殊情況：

常見例子：

- 空陣列（empty array）
- 單一元素（single element）
- 重複元素（duplicate values）
- 負數（negative values）
- 極大值或溢位（overflow）
- null pointer

在實作中應主動檢查：

- index 是否越界
- pointer 是否有效
- 記憶體是否正確分配與釋放

---

## 實作原則（Implementation Standard）

本專案以 C 語言實作，原則如下：

- 從零實作（from scratch）
- 不依賴高階函式庫（avoid high-level abstractions）
- 重視指標（pointer）與記憶體操作（memory management）
- 程式需具可讀性與可維護性（readability & maintainability）

---

## 練習流程（Practice Workflow）

每個主題應完成以下步驟：

1. 使用 C 語言實作
2. 撰寫說明文件（.md）
3. 解決對應題目（LeetCode）
4. 模擬面試進行口頭解釋

---

## 與系統程式（OS / System Programming）的關聯

本專案亦支援未來作業系統（Operating System）相關實作：

- 記憶體管理（memory management）→ malloc / free
- 資料結構（data structure）→ process / scheduling
- 演算法（algorithm）→ resource allocation

資料結構與演算法為系統程式設計的基礎

---

## My Objective

- 建立完整 DSA 基礎
- 強化問題分析與解決能力
- 準備技術面試（Technical Interview）
- 發展系統層級思維（C / OS）

---

## 核心觀點（Key Insight）

演算法能力的本質，不在於記住多少題目，

而在於是否能夠：

理解問題 → 建立模型 → 設計解法 → 正確實作 → 清楚表達
