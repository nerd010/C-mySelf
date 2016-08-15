#include <stdio.h>
#include <math.h>

int main (void)
{
    double a,b,c,s,area;
    scanf("%lf,%lf,%lf", &a, &b, &c);
    s = 1.0/2*(a+b+c);
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("a = %7.2f, b = %7.2f, c = %7.2f, s = %7.2f\n", a, b, c, s);
    printf("area = %7.2f\n", area);

    return 0;
}
