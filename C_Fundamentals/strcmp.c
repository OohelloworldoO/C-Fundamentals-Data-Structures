#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20], str2[20], str3[20];
    if(strcmp(str1, str2) == 0)
    {
        printf("相同\n");
    }
    else{
        printf("不相同\n");
    }
    return 0;
}