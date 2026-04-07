#include<stdio.h>
#include<stdlib.h>
/*
void f(void)
{
    ...
}
*/

/*
void 為不回傳任何值 return 型別, int 為指定 return type 為整數
例如 int main(){...} return type 為0(false) or 其他數字(true)
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

