#include<stdio.h>
#include<stdlib.h>
typedef struct Node// 叫做 "Node" 自定義的結構由一個 int data (存放value)、 Node *next(pointer 指向下一個位址)組成
{
    int data;
    struct Node *next;
} Node;

Node *createNode(int value) // 自定義結構的 function 建立一個 Node 
{
    Node *newNode = (Node*)malloc(sizeof(Node)); // 每次呼叫 createNode 就 malloc 申請一個 Node 大小的記憶體空間 起始位址從 newNode
    if(newNode == NULL) return NULL;
    newNode->data = value; // newNode 新的 data 空間存放 value
    newNode->next = NULL; // next 為 pointer 目前還沒有下一個位址 所以為 NULL
    return newNode; // 回傳新的 Node 這個結構(含 int data、Node *next 位址)
}

void insertAtHead(Node **head, int value) // 把 Node 
// **head 為 pointer's pointer 指向這個 pointer 的 pointer 
{
    Node *newNode = createNode(value); // newNode 是一個 pointer 指向一個新建立的 Node（裡面有 data、next）
    newNode->next = *head; // newNode->next 指向原本 head 指向的節點
    *head = newNode; // *head 被賦予 newNode 也就是指向剛剛新增的 newNode
}

/* 
head 是一個 pointer 永遠指向 linked list 的第一個 node
insert new node 時
 - newNode->next 指向原本的 head
 - head 改為指向 newNode
*/
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

void freeList(Node *head)
{
    Node *temp;
    while(head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void)
{
    Node *head = NULL;
    insertAtHead(&head, 5);
    insertAtHead(&head, 10);
    insertAtHead(&head, 20);
    printf("Linked list content: ");
    printList(head);
    freeList(head);
    return 0;
}







/*



*/