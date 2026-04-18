#include<stdio.h>
void swap(int *, int *); // prototype，告訴編譯器規格

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("a = %d, b = %d", a, b);
    return 0;
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}