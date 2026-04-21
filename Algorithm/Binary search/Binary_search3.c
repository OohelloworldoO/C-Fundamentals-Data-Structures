
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
    int *arr; // 動態陣列起始位址 (pointer)
    int top; // 用來記錄 array 內有沒有元素，還有用來檢查有沒有overflow
    int capacity; // 紀錄容量
} array;

void initialize(array *a, int size);
int binary_search(array *a, int target, int size);
void bubble_sort(array *a, int size);
void push(array *a, int value);

int main(void)
{
    array a; // 引用 array 結構命名為 a
    int size_of_malloc; // malloc申請記憶體大小
    int target;

    printf("please input ur array size: \n");
    if(scanf("%d", &size_of_malloc) != 1)
    {
        printf("invalid input\n");
        return 1;
    }
    initialize(&a, size_of_malloc);

    printf("please input ur array: \n");

    for(int i = 0; i < size_of_malloc; i++)
    {
        int value; // value 是 input = array 陣列內的元素
        scanf("%d", &value);
        push(&a, value);
    }

    for(int i = 0; i < size_of_malloc; i++)
    {
        printf("%d ", a.arr[i]);
    }

    printf("\n");
    printf("Bubble sort: \n");

    bubble_sort(&a, size_of_malloc);

    for(int i = 0; i < size_of_malloc; i++)
    {
        printf("%d ", a.arr[i]);
    }

    printf("\n");
    printf("please input ur target number: \n");
    scanf("%d", &target);
    int result = binary_search(&a, target, size_of_malloc);
    if(result != -1)
    {
        printf("Found at index %d\n", result);
    }
    else
    {
        printf("Not found");
    }
    free(a.arr);
    return 0;
}

void initialize(array *a, int size) // size_of_malloc 會變成 size 然後再申請一塊 int * size 的記憶體
{
    a->arr = malloc(sizeof(int) * size);
    a->top = -1; // 表示空的 array
    a->capacity = size;
}

void push(array *a, int value)
{
    if(a->top + 1 >= a->capacity)
    {
        printf("array overflow\n");
        return;
    }
    a->top++; // top = -1 開始
    a->arr[a->top] = value;
}

void bubble_sort(array *a, int size)
{
    int temp;
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1 - i; j++)
        {
            if(a->arr[j] > a->arr[j+1])
            {
                temp = a->arr[j];
                a->arr[j] = a->arr[j+1];
                a->arr[j+1] = temp;
            }
        }
    }
}

int binary_search(array *a, int target, int size)
{
    int left = 0, right = size -1;
    while(left <= right)
    {
        int mid = left + (right - left) / 2; // 避免 overflow 
        if(a->arr[mid] == target) 
        {
            return mid;
        }
        else if(a->arr[mid] < target)
        {
            left = mid + 1;
        }
        else right = mid - 1;
    }
    return -1;
}
