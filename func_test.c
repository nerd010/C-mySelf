#include <stdio.h>

int f(int a, int b);

int main (void)
{
    int i = 2, p = 0;
    int z = 0;
    z = ++i;
    p = f(i, z);
    printf ("p:%d\n", p);
    return 0;
}

int f(int a, int b)
{
    int c;
    if (a > b)
    {
        c = 1;
    }
    else if(a == b)
    {
        c = 0;
    }
    else
    {
        c = -1;
    }
    return c;
}
