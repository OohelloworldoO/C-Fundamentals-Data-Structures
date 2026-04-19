#include<stdio.h>
#include<stdbool.h>

#define MAX_SIZE 100

typedef struct
{
    int arr[MAX_SIZE]; // 用來存 stack 的元素
    int top; // 用來記錄最上面的元素 index
} stack;

void initialize(stack *s);
void push(stack *s, int value);
int pop(stack *s);
int peek(stack *s);
bool isEmpty(stack *s);
bool isFull(stack *s);

int main()
{
    stack s;
    initialize(&s);
    push(&s, 10);
    push(&s, 20);
    push(&s, 200);
    push(&s, 300);
    printf("top = %d\n", peek(&s));
    printf("pop = %d\n", pop(&s));
    printf("top = %d\n", peek(&s));
    return 0;
}


void initialize(stack *s)
{
    s->top = -1;
}

void push(stack *s, int value)
{
    if(isFull(s))
    {
        printf("stack overflow\n");
        return;
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

int peek(stack *s) // 用來看最上面的值
{
    if(isEmpty(s))
    {
        printf("stack is empty\n");
        return;    
    }
    return s->arr[s->top];
}

bool isEmpty(stack *s)
{
    return s->top == -1;
}

bool isFull(stack *s)
{
    return s->top == MAX_SIZE -1;
}