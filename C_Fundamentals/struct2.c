#include<stdio.h>
typedef struct
{
    int id, score;
} Student;

typedef struct
{
    int gg, yy;
} ggyy;

int main()
{
    Student s;
    Student *p = &s;

    p -> id = 101; // `->` 就是用來存取 pointer 所指向的 struct 成員 然後修改/讀取
    p -> score = 95;
    printf("%d %d\n", p -> id, p -> score);

    ggyy gy;
    ggyy *LP33 = &gy;
    (*LP33).gg = 30;
    (*LP33).yy = 50;
    printf("%d %d", (*LP33).gg, (*LP33).yy);
    return 0;
}