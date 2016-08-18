#include <stdio.h>

int main (void)
{
    int a [10];
    int i, k;
    printf ("Please Enter Ten Numbers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf ("%d", &a[i]);
    }
    printf ("\n");

    for (int j = 0; j < 9; j++)
    {
        for (int t = 0; t < 9 - j; t++)
        {
            if (a[t] > a[t+1])
            {
                k = a[t];
                a[t] = a[t+1];
                a[t+1] = k;
            }
        }
    }
    printf ("The sorted numbers:\n");
    for (i = 0; i < 10; i++)
    {
        printf ("%5d\n", a[i]);
    }
}
