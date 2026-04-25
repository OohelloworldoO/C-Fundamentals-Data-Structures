#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
    int *arr;
    int top;
    int swap_times;
    int pass_time;
} array;

void initialize(array *a, int size)
{
    a->arr = (int *)malloc(sizeof(int) * size);
    if(a->arr == NULL)
    {
        printf("memory allocation failed\n");
        exit(1); // 立刻結束整個程式
    }
    a->top = -1;
    a->swap_times = 0;
    a->pass_time = 0;
}

void bubble_sort(array *a, int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        a->pass_time++;
        int swapped = 0;
        for(int j = 0; j < size - 1 - i; j++)
        {
            if(a->arr[j] > a->arr[j+1])
            {
                int temp = a->arr[j];
                a->arr[j] = a->arr[j+1];
                a->arr[j+1] = temp;
                swapped = 1;
                a->swap_times++;
            }
        }
        if(swapped == 0) break; // 一整輪沒有 swap，代表「沒有任何相鄰元素是錯的」→ 整體必然已排序
    }
}

int main(void)
{
    array a;
    int size_of_array;
    printf("please input ur size of array: \n");
    if(scanf("%d", &size_of_array) != 1 || size_of_array <= 0)
    {
        printf("invalid input\n");
        return 1;
    }
    initialize(&a, size_of_array);
    printf("please input ur value: \n");
    for(int i = 0; i < size_of_array; i++)
    {
        scanf("%d", &a.arr[i]);
    }
    printf("this is ur array before bubble sort: \n");
    for(int i = 0; i < size_of_array; i++)
    {
        printf("%d ", a.arr[i]);
    }
    bubble_sort(&a, size_of_array);
    printf("after bubble sort: \n");
    for(int i = 0; i < size_of_array; i++)
    {
        printf("%d ", a.arr[i]);
    }
    printf("\n");
    printf("swap times: %d\n", a.swap_times);
    printf("pass time: %d", a.pass_time);
    free(a.arr);
    return 0;
}