#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
    int *arr;
    int top;
    int loop_time;
    int shift_times;
} array;

void initialize(array *a, int size)
{
    a->arr = (int*)malloc(sizeof(int) * size);
    a->top = 0;
    a->loop_time = 0;
    a->shift_times = 0;
}

void push(array *a, int target)
{
    a->arr[a->top] = target;
    a->top++; // 下一個可用的index
}

void insertion_sort(array *a)
{
    int n = a->top;
    for(int i = 1; i < n; i++)
    {
        int key = a->arr[i];
        int j = i - 1;
        a->loop_time++;
        while(j >= 0 && a->arr[j] > key)
        {
            a->arr[j+1] = a->arr[j]; // right shift
            j--; // origin index
            a->shift_times++;
        }
        a->arr[j+1] = key;
    }
}

int main(void)
{
    array a;
    int size_of_array, target;
    printf("please input ur array size: ");
    scanf("%d", &size_of_array);
    printf("\n"); 
    initialize(&a, size_of_array);
    printf("please input the value of array: \n");
    for(int i = 0; i < 4; i++)
    {
        scanf("%d", &a.arr[i]);
        a.top++;
    }
    printf("\n");
    printf("please input the number u want to insert: ");
    scanf("%d", &target);
    push(&a, target);
    printf("\n");
    printf("ur array: ");
    for(int i = 0; i < a.top; i++)
    {
        printf("%d ", a.arr[i]);
    }
    printf("\n");
    insertion_sort(&a);
    printf("after insertion sort: ");
    for(int i = 0; i < a.top; i++)
    {
        printf("%d ", a.arr[i]);
    }
    printf("\n");
    printf("shift times: %d\n", a.shift_times);
    printf("loop times: %d\n", a.loop_time);
    free(a.arr);
    return 0;
}
