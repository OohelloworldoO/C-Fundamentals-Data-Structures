#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, n[5];
    char input[20];

    for (i = 1; i <= 5; i++)
    {
        printf("%d: ", i);
        scanf("%d", &n[i - 1]);
    }

    while (1)
    {
        printf("Q: ");
        scanf("%19s", input);//最多讀取19個字元

        if (strcmp(input, "done") == 0)
        {
            break;
        }

        int index;
        if (sscanf(input, "%d", &index) != 1)
        {
            printf("Invalid input\n");
            continue;
        }

        if (index < 1 || index > 5)
        {
            printf("Out of range\n");
            continue;
        }

        printf("%d\n", n[index - 1]);
    }

    return 0;
}
/*
strcmp比較兩個字串 如果相同則 strcmp("a", "b") == 0 else != 0
strncmp(a, b, n);
strcpy(dest, src);
sscanf(s, "%d", &x);
*/