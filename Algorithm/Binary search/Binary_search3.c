
/*
1. 使用者輸入int 用 malloc 動態申請一塊 int * size 的記憶體大小
2. 使用者輸入陣列大小
3. 使用者輸入陣列元素(未排列)
4. 輸入目標數字
5. bubble sort排列好大小
6. binary search找到 target


n 為目前 index
target 為目標數字
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int *arr; // 動態陣列起始位址
    int *top; // 頂端的指針 用來記錄 array 內有沒有元素，還有用來檢查有沒有overflow
} array;

void initialize(array *a, int size);
int binary_search(int arr[], int n, int target);
int sort(int arr[]);
void push(array *a, int value);

int main(void)
{
    array a; // 引用 array 結構命名為 a
    int size_of_malloc; // malloc申請記憶體大小
    printf("please input ur array size: \n");
    scanf("%d", &size_of_malloc);
    initialize(&a, size_of_malloc);
    printf("please input ur array: \n");
    for(int i = 0; i < size_of_malloc; i++)
    {
        int j; // j 是 input = array 陣列內的元素
        scanf("%d", &j);
        push(&a, j);
    }
    for(int i = 0; i < size_of_malloc; i++)
    {
        printf("%d", a->*arr[i]);
    }
    return 0;
}

void initialize(array *a, int size) // size_of_malloc 會變成 size 然後再申請一塊 int * size 的記憶體
{
    a->arr = malloc(sizeof(int) * size);
    a->top = -1; // 表示空的 array
}

void push(array *a, int value)
{
    a->top++; // top = -1 開始
    a->arr[a->top] = value;
}

int sort(int arr[])
{
    
}

int binary_search(int arr[], int n, int target)
{

}