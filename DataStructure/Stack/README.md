# Stack（堆疊）

## 1. Definition（定義）

Stack 是一種線性資料結構（linear data structure），
遵循 LIFO（Last In, First Out）原則。

元素只能從「頂端（top）」進行新增與移除。

![stack](../images/stack-push-pop.png)

---

## 2. Core Operations（基本操作）

- push(x) → 將元素加入 stack
- pop() → 移除頂端元素
- peek() → 取得頂端元素
- isEmpty() → 判斷是否為空
- isFull() → 判斷是否已滿（array implementation）

---

## 3. Implementation（實作方式）

### (1) Array Implementation

- 使用固定大小陣列
- 透過 index（top）管理 stack

優點：

- 實作簡單
- cache friendly（連續記憶體）

缺點：

- 容量固定（可能 overflow）

---

### (2) Linked List Implementation

- 每個節點指向下一個元素
- top 指向 head

優點：

- 動態擴展（dynamic size）

缺點：

- 記憶體分配成本（malloc / free）
- pointer 操作較複雜

---

## 4. Time Complexity（時間複雜度）

| Operation | Complexity |
| --------- | ---------- |
| push      | O(1)       |
| pop       | O(1)       |
| peek/top  | O(1)       |
| isEmpty   | O(1)       |
| isFull    | O(1)       |

---

## 5. Space Complexity（空間複雜度）

- Array → O(n)（固定大小）
- Linked List → O(n)（動態配置）

---

## 6. Memory Consideration（記憶體觀點）

- Array：
  - 使用連續記憶體（contiguous memory）
  - 可能造成 overflow

- Linked List：
  - 使用動態記憶體（heap allocation）
  - 必須注意 memory leak

---

## 7. Use Cases（使用情境）

- Function call stack（函式呼叫堆疊）
- Expression evaluation（運算式計算）
- Undo / Redo 操作
- DFS（深度優先搜尋）

---

## 8. Edge Cases（邊界情況）

- 空 stack 呼叫 pop()
- stack overflow（array）
- 單一元素
- pointer 為 NULL（linked list）

---

## 9. Common Mistakes（常見錯誤）

- 未檢查 empty stack 就 pop
- array implementation overflow
- linked list 忘記 free（memory leak）
- top index 更新錯誤

---

## 10. Implementation（C）

- array-based stack.c
- linked-list-based stack.c

---

## 11. Related Problems（練習）

- Valid Parentheses
- Min Stack
- Evaluate Reverse Polish Notation

---

## 12. Insight（重要觀點）

Stack 的本質是：

`限制操作位置（只允許在 top 操作`

這種限制使得某些問題（如括號匹配、DFS）可以被有效解決。
