#include<stdio.h>
#include<stdlib.h>
/*
void f(void)
{
    ...
}
*/

/*
void 預設為回傳:"return "型別, int 為指定 return type 為整數
例如 int main(){...} return type 為0(true) or 其他數字(false)
*/

int f(int);

int main()
{
    printf("%d\n", f(0));
    return 0;
}

int f(int i)
{
    if(i == 2)
    {
        return i;
    }
    return f(i+1);
}

