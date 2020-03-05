#include "circle.c"
#include "math.h"
#include "stdio.h"
#include "stdlib.h"

int main()
{
    while (1) {
        char s[10];
        scanf("%s", s);

        if (strcmp(s, "circle") == 0) {
            printf("\n   %s", s);
            int x, y;
            float r;
            scanf("%d %d %f", &x, &y, &r);
            printf("circle(%d %d, %f", x, y, r);
            printf(")");
            circle(x, y, r);
        }
        if (strcmp(s, "0") == 0) {
            return 1;
        }
    }
}

