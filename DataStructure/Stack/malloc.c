#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    int *p = malloc(sizeof(int) * 3); /* 跟系統申請一塊記憶體 大小 = 3 * int，也就是12 byte 
    sizeof(int)是因為不同電腦 int 大小可能不同
    4 byte(最常見)
    2 byte(舊系統)
    8 byte(某些架構)
    */

    p[0] = 10;
    p[1] = 20;
    p[2] = 30;

    printf("%d %d %d\n", p[0], p[1], p[2]);

    free(p); // 把記憶體還給系統，如果不 free 的話會導致 memory leak (記憶體外洩)
    return 0;
}