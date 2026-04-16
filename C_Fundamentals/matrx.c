#include<stdio.h>

int main()
{
    int v[3][3], i, j, k = 1;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            v[i][j] = k;
            k++;
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d", v[i][j]);
        }
        printf("\n");
    }
    return 0;
}