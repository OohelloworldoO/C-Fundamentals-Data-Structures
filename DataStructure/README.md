## 1. Definition

Stack 是一種 LIFO（Last In First Out）的資料結構。

最後加入的元素會最先被取出。

---

## 2. Use Case

- 表達式計算（Expression Evaluation）
- 函式呼叫（Call Stack）
- DFS（Depth First Search）
- Undo / Redo 系統

---

## 3. Core Idea

Stack 使用一個陣列搭配 `top` 指標：

- push：top +1，寫入元素
- pop：讀取元素，top -1
- peek：查看頂端元素

---

## 4. Data Structure Design

```c
typedef struct {
    int *arr;
    int top;
    int capacity;
} Stack;
```

| 成員     | 說明                  |
| -------- | --------------------- |
| arr      | 指向儲存元素的記憶體  |
| top      | 當前 stack 頂端 index |
| capacity | stack 最大容量        |

## 5. State Representation

| 成員     | 說明                  |
| -------- | --------------------- |
| arr      | 指向儲存元素的記憶體  |
| top      | 當前 stack 頂端 index |
| capacity | stack 最大容量        |

## 6. Operations

```
void push(Stack *s, int value)
{
    if (isFull(s)) {
        printf("Stack Overflow\n");
        return;
    }

    s->arr[++s->top] = value;
}
```

```
int pop(Stack *s)
{
    if (isEmpty(s)) {
        printf("Stack Underflow\n");
        return -1;
    }

    return s->arr[s->top--];
}
```

```
int peek(Stack *s)
{
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return -1;
    }

    return s->arr[s->top];
}
```

## 7. Complexity Analysis

| Operation | Time |
| --------- | ---- |
| push      | O(1) |
| pop       | O(1) |
| peek      | O(1) |

## 8. Edge Cases

- Stack Overflow（容量已滿）
- Stack Underflow（空 stack）
- 多次 pop
- 初始化容量為 0

## 10. Insight

- Stack 的本質是「限制操作的 array」
- `top` 是核心控制變數
- pointer + malloc 讓 stack 可以動態擴展
- `arr[i] == *(arr + i)`（pointer 與 array 的本質）
