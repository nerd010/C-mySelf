#include <stdio.h>

int main (void)
{
    long int a = 1, b = 2;
    for (int i = 1; i < 20; i++)
    {
        a = a + b;
        b = a + b;
        printf ("a = %5ld, b = %5ld\n", a, b);
    }

    return 0;
}
