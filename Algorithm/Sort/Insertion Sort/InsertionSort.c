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
    a->arr[a->top+1] = target;
}

void insertion_sort(array *a, int target, int size)
{
    for(int i = 1; i < size - 1; i++)
    {
        for(int j = 0; j < i - 1; j++)
        {
            if(a->arr[j] > a->arr[j+1])
            {
                int temp = a->arr[j];
                a->arr[j] = a->arr[j+1];
                a->arr[j+1] = temp;
                a->shift_times++;
            }
        }
        a->loop_time++;
    }
}

int main(void)
{
    array a;
    int size_of_array, target;
    int initial_size_limit = 3;
    printf("please input ur array size: ");
    scanf("%d", &size_of_array);
    printf("\n");
    initialize(&a, size_of_array);
    printf("please input the value of array: \n");
    for(int i = 0; i < initial_size_limit; i++)
    {
        scanf("%d ", &a.arr[i]);
        a.top++;
    }
    printf("\n");
    printf("please input the number u want to insert: ");
    scanf("%d", &target);
    push(&a, target);
    printf("\n");
    printf("ur array: ");
    for(int i = 0; i < a.top+1; i++)
    {
        printf("%d ", a.arr[i]);
    }
    printf("\n");
    insertion_sort(&a, target, size_of_array);
    printf("after insertion sort: ");
    for(int i = 0; i < a.top+1; i++)
    {
        printf("%d", a.arr[i]);
    }
    printf("\n");
    printf("shift times: %d\n", a.shift_times);
    printf("loop times: %d\n", a.loop_time);
    free(a.arr);
    return 0;
}
