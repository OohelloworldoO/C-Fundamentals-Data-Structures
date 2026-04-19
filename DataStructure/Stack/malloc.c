#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = malloc(sizeof(int) * 3);

    p[0] = 10;
    p[1] = 20;
    p[2] = 30;

    printf("%d %d %d\n", p[0], p[1], p[2]);

    free(p);
    return 0;
}