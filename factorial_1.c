#include <stdio.h>

int fac(int n);
int main (void)
{
    for (int i = 1; i < 6; i++)
    {
        printf ("%d! = %d\n", i, fac(i));
    }
    return 0;
}

int fac(int n)
{
    register int a = 1;
    for (int i = 1; i < n + 1; i++)
    {
        a *= i;
    }
    return a;
}
