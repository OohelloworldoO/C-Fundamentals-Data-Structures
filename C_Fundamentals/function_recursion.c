#include<stdio.h>
#include<stdlib.h>
/*
void f(void)
{
    ...
}
*/

/*
void為沒有指定 return 型別, int為指定return type為整數
例如 int main(){...} return type為0(false) or 其他數字(true)
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

