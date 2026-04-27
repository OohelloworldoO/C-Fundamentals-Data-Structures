#include <stdio.h>
#include <stdlib.h>

// 1. 定義節點
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// 2. 建立新節點的函式
Node* createNode(int value) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) return NULL; // 安全檢查
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// 3. 在頭部插入節點 (使用雙重指標修改 head)
void insertAtHead(Node **head, int value) {
    Node *newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}

// 4. 列印串列
void printList(Node *head) {
    Node *current = head;
    while (current != NULL) {
        printf("[%d] -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// 5. 釋放記憶體
void freeList(Node *head) {
    Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    Node *head = NULL; // 初始空串列

    insertAtHead(&head, 10);
    insertAtHead(&head, 20);
    insertAtHead(&head, 30);

    printf("Linked List content: ");
    printList(head);

    freeList(head);
    return 0;
}