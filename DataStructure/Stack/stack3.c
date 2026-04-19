#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct 
{
    int *arr; // 動態陣列的起始位址
    int top; // 最上面元素的 index
    int capacity; // 總容量
} stack;

void initialize(stack *s, int size);
void push(stack *s, int value);
bool isFull(stack *s);
bool isEmpty(stack *s);
int pop(stack *s);
int peek(stack *s);
void destory(stack *s);

int main()
{
    stack s;
    int size_of_malloc;
    printf("plz input size of array\n");
    scanf("%d", &size_of_malloc);
    initialize(&s, size_of_malloc);

    for(int i = 0; i < size_of_malloc; i++)
    {
        int j;
        printf("plz input: \n");
        scanf("%d", &j);
        push(&s, j);
        printf("top = %d\n", peek(&s));
    }

    printf("pop = %d\n", pop(&s));
    printf("top = %d\n", peek(&s));

    destory(&s);
    return 0;
    
}

void initialize(stack *s, int size)
{
    s->arr = malloc(sizeof(int) * size); // 跟系統申請一塊放 size 個 int 的記憶體
    s->top = -1; // 表示空 stack
    s->capacity = size;
}

bool isFull(stack *s)
{
    return s->top == s->capacity -1;
}

bool isEmpty(stack *s)
{
    return s->top == -1;
}

void push(stack *s, int value)
{
    if(isFull(s))
    {
        printf("stack overflow\n");
        return -1;
    }
    s->top++;
    s->arr[s->top] = value;
}

int pop(stack *s)
{
    if(isEmpty(s))
    {
        printf("stack is empty\n");
        return -1;
    }
    int value = s->arr[s->top];
    s->top--;
    return value;
}

int peek(stack *s)
{
    if(isEmpty(s))
    {
        printf("stack is empty\n");
        return -1;
    }
    return s->arr[s->top];
}

void destory(stack *s)
{
    free(s->arr);
    s->arr = NULL; // 避免誤用已經釋放掉的 pointer
    s->top = -1;
    s->capacity = 0;
}
