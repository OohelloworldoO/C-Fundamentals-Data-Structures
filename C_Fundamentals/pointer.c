#include<stdio.h>
int main()
{
    int i, j = 60;
    int *PointerJ = &j;
    printf("%d\n", *PointerJ);  // 透過間接運算子 `*` ，取得指標 PointerJ 所指向物件的值
    printf("%d", PointerJ);
    return 0;
}