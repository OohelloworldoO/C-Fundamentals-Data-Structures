#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;


Node *createNode(int value)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    if(newNode == NULL) return newNode;
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertAtHead(Node **head, int value)
{
    Node *newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}

void printfList(Node *head)
{
    Node *current = head;
    while(current != NULL)
    {
        printf("[%d]->", current->data);
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
    int size_of_linked_list;
    printf("please input ur size of linked list: ");
    scanf("%d", &size_of_linked_list);
    printf("pleas input ur value:");
    for(int i = 0; i < size_of_linked_list; i++)
    {
        int temp;
        scanf("%d", &temp);
        insertAtHead(&head, temp);
    }
    printfList(head);
    freeList(head);
    return 0;
}