#include "math.h"
#include "stdio.h"
#include "stdlib.h"

double circle(double x, double y, double r)
{
    printf("\n perimetr - %f", 2 * M_PI * r);
    printf("\n area - %f", M_PI * r * r);
    printf("\n    intersects \n");
    return (float)2 * M_PI * r;
}

int main()
{
    int x, y;
    float r;
    scanf("%d %d %f", &x, &y, &r);
    printf("circle(%d %d, %f", x, y, r);
    printf(")");
    circle(x, y, r);
}

