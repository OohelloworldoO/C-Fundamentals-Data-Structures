#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
    int *arr;
    int top;
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
}

void bubble_sort(array *a, int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1 - i; j++)
        {
            if(a->arr[j] > a->arr[j+1])
            {
                int temp = a->arr[j];
                a->arr[j] = a->arr[j+1];
                a->arr[j+1] = temp;
            }
        }
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
    free(a.arr);
    return 0;
}