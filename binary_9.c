#include <stdio.h>
void to_binary (unsigned long n);

int main (void)
{
    unsigned long number;
    printf ("Enter an integer (q to quit): \n");
    while (scanf ("%lu", &number) == 1)
    {
        printf ("Binary equivalent: ");
        to_binary (number);
        putchar ('\n');
        printf ("Enter an integer (q to quit ): \n");
    }
    printf ("Bye.\n");
    return 0;
}

void to_binary (unsigned long n) /* 递归函数 */
{
    int r;
    r = n % 2;
    if (n >= 2)
        to_binary (n / 2);
   // putchar ('0' + r);
    putchar (r ? '1' : '0');

    return;
}
