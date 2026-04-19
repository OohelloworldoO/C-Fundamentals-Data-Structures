# Stack 拆解

- struct(內含 top、 arr[100])
- initialize
- push
- peek

| top |           status            |
| :-: | :-------------------------: |
| -1  |         null stack          |
|  0  |     有一個元素在 arr[0]     |
|  1  | 有兩個元素在 arr[2]、arr[1] |

```
void push(Stack *s, int value)
{
    s->top++;
    s->arr[s->top] = value;
}
```

| index | value |
| :---: | :---: |
|   0   |  10   |
|   1   |  20   |
