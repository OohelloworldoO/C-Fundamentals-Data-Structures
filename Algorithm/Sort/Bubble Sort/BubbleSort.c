#include <stdio.h>

void bubble_sort(int v[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int swapped = 0;

        for (int j = 0; j < n - 1 - i; j++)
        {
            if (v[j] > v[j + 1]) {
                int t = v[j];
                v[j] = v[j + 1];
                v[j + 1] = t;
                swapped = 1;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

void print_array(int v[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main()
{
    int v[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &v[i]);
    }

    bubble_sort(v, 5);
    print_array(v, 5);

    return 0;
}