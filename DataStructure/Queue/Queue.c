#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef struct {
    int arr[MAX_SIZE];
    int front;
    int rear;
} Queue;

void initialize(Queue *q)
{
    q->front = 0;
    q->rear = -1;
}

bool isEmpty(Queue *q)
{
    return q->front > q->rear;
}

bool isFull(Queue *q)
{
    return q->rear == MAX_SIZE - 1;
}

void enqueue(Queue *q, int value)
{
    if (isFull(q)) {
        printf("Queue full\n");
        return;
    }

    q->arr[++q->rear] = value;
}

int dequeue(Queue *q)
{
    if (isEmpty(q)) {
        printf("Queue empty\n");
        return -1;
    }

    return q->arr[q->front++];
}

int main()
{
    Queue q;
    initialize(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    printf("%d\n", dequeue(&q)); // 10
    printf("%d\n", dequeue(&q)); // 20
    printf("%d\n", dequeue(&q)); // 30
    return 0;
}