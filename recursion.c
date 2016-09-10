#include <stdio.h>

long recursion(int n);

int main (void)
{
    int num;
    long result;
    
    printf ("Please input number(>0):");
    scanf ("%d", &num);
    result = recursion(num);
    printf ("result:%ld\n", result);
    return 0;
}

long recursion(int n)
{
    long temp_result;
    if (n < 0)
    {
        printf ("Input Error");
    }
    else if (0 == n || 1 == n)
    {
        temp_result = 1;
    }
    else
    {
        temp_result = recursion(n-1) * n;
    }
    return temp_result;
}

