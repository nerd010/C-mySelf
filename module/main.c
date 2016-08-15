#include <stdio.h>

extern void func();
extern int m;

int n = 200;
int main (void)
{
    func();
    printf ("m = %d\nn = %d\n", m, n);
}
