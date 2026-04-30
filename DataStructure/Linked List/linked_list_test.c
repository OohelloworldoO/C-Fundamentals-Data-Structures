#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *createNode(int a, int b)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = a;
    newNode->next = b;
    return newNode;
}
