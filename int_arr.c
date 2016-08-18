#include <stdio.h>

int main (void)
{
    int i, a[10];
    for (i = 0; i < 10; i++)
    {
        a[i] = i;
        printf ("a[%d] = %d\n", i, i);
    }

    for(i = 0; i < 10; i++)
    {
        printf ("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}
