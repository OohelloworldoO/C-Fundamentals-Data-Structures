#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20], str2[20], str3[20];
    scanf("%19s %19s", &str1, &str2);
    if(strcmp(str1, str2) == 0)
    {
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    return 0;
}