#include<stdio.h>
typedef struct 
{
    int x;
    int y;
}Point;

typedef struct Point2
{
    int a, b;
} Point2;

typedef struct Point3
{
    int c, d;
};

int main()
{
    Point p;
    Point2 pp;
    struct Point3 ppp;
    p.x = 3;
    p.y = 5;
    pp.a = 30;
    pp.b = 50;
    ppp.c = 300;
    ppp.d = 500;
    printf("%d %d\n", p.x, p.y);
    printf("%d %d\n", pp.a, pp.b);
    printf("%d %d\n", ppp.c, ppp.d);
    return 0;
}
