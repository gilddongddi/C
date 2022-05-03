

#include <stdio.h>

int main(void)
{
    int x = 8,y,z;
    y = x--;
    z = --x;
    printf("%d,%d,%d\n", x, y, x);
}
