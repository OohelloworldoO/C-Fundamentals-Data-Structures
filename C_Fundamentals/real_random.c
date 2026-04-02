#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL)); //Initialize random number generator 單位為秒
    for(int i=0; i<=5; i++)
    {
        printf("%d\n", rand());
    }
    return 0;
}