#include<stdio.h>
int main()
{
    int i, j = 60;
    int *PointerJ = &j;
    printf("%d\n", *PointerJ);  //印出*Pointer這個記憶體位址上的值
    printf("%d", PointerJ);
    return 0;
}
