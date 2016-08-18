#include <stdio.h>

int main (void)
{
    int a = 1, b = 2;
    for (int i = 1; i < 20; i++)
    {
        a = a + b;
        b = a + b;
        printf ("a = %5d, b = %5d\n", a, b);
    }

    return 0;
}
