#include <stdio.h>

int main (void)
{
    for (int i = 1; i < 7; i++)
    {
        for (int j = 0; j < i; j++) 
        {
    //        printf ("*");
            putchar('*');
        }
        printf("\n");
    }
    return 0;
}
