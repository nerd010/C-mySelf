#include <stdio.h>

int main (void)
{
    //int a = 1, b = 1;
    int fib[20] = {1,1};
    for (int i = 2; i < 20; i++)
    {
        fib[i] = fib[i-2] + fib[i-1];
    }
    for (int i = 0; i < 20; i++)
    {
        if (0 == i%5)
        {
            printf ("\n");
        }
        printf ("%12d", fib[i]);
    }
    printf("\n");
}
