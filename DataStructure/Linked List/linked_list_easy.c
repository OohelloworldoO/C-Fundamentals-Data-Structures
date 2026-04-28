#include<stdio.h>
#include<stdlib.h>
typedef struct // 叫做 "Node" 的結構由一個 int data (存放value)、 Node *next(pointer 指向下一個位址)
{
    int data;
    struct Node *next;
} Node;

Node *createNode(int value)
{
    Node *newNode = (Node*)malloc(sizeof(Node)); // 每次呼叫 createNode 就 malloc 申請一個 node 大小的記憶體空間 起始位址從 newNode
    if(newNode == NULL) return NULL; // 如果newNode
    newNode->data = value; // newNode 新的data空間存放value
    newNode->next = NULL; // next 為 pointer 目前還沒有下一個位址 所以為NULL
    return newNode; // 回傳新的 Node 這個結構(含 int data、Node *next 位址)
}

void insertAtHead(Node **head, int value)
{
    Node *newNode = createNode(value); // Node 這個結構 定義一個新的pointer 叫做 newNode 的記憶體位址 把 createNode(value)
    newNode->next = *head;
    *head = newNode;
}


void printList(Node *head)
{
    Node *current = head;
    while(current = head)
    {
        printf("[%d] ->", current->data);
        current = current->next;
    }
    printf("NULL\n");
}












/*



*/