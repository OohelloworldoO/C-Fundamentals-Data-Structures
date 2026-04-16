#include<stdio.h>

int main()
{
    int v[9] = {1,2,3,4,5,6,7,8,9};
    for(int i = 0; i < 9; i++)
    {
        printf("%d", v[i]);
        if(i % 3 == 2) printf("\n");
    }
    return 0;
}