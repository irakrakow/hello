#include <stdio.h>

int main(void)
{
    int x = 20;
    int y = 50;

    printf("x is %i\n", x);
    printf("y is now %i\n", y);

    // swapping...
    int temp = x;
    int v = 5;
    x = y;
    y = temp;

    printf("x is now %i\n", x);
    printf("y is now %i\n", y);

    return 0;
}
