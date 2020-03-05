#include "circle.c"
#include "math.h"
#include "stdio.h"
#include "stdlib.h"

int main()
{
    int x, y;
    float r;
    scanf("%d %d %f", &x, &y, &r);
    printf("circle(%d %d, %f", x, y, r);
    printf(")");
    circle(x, y, r);
}

