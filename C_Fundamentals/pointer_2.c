#include<stdio.h>
int main()
{
    int arr[3] = {10, 20, 30};
    int *Pointer = arr; // 等價於 p = &arr[0]; p 指向「第一個元素的位址」
    printf("%d", *(Pointer + 1)); // (Pointer + 1) 往後移動一個int 的大小 也就是 4 byte
    return 0;
}