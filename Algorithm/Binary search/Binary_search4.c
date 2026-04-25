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
    a->top = -1;
}

void sort(array *a, int size)
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

int binary_search(array *a, int target, int size)
{
    int left = 0, right = size - 1;
    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        if(target > a->arr[mid])
        {
            left = mid + 1;
        }
        else if(target < a->arr[mid])
        {
            right = mid - 1;
        }
        else return mid;
    }
    return -1;
}

int main(void)
{
    array a;
    int size_of_malloc, target;
    printf("please input ur size of array: \n");
    scanf("%d", &size_of_malloc);
    initialize(&a, size_of_malloc);
    printf("please input ur value: \n");
    for (int i = 0; i < size_of_malloc; i++)
    {
        scanf("%d", &a.arr[i]);
    }
    printf("please input ur target number: \n");
    scanf("%d", &target);

    sort(&a, size_of_malloc);
    printf("after sorting: \n");
    for(int i = 0; i < size_of_malloc; i++)
    {
        printf("%d ", a.arr[i]);
    }
    printf("\n");

    int result = binary_search(&a, target, size_of_malloc);
    printf("ur target number is in the `%d` of the array", result);
    free(a.arr);
    return 0;
}