#include <stdio.h>

#define M 10
int main(void)
{
    static int a[M] = {-12, 0, 6, 16, 23, 56, 80, 100, 110, 115};
    int n, low, mid, high, found;
    low = 0;
    high = M - 1;
    found = 0;
    printf("please input a number to be search：");
    while (scanf("%d", &n) != 1)
    {
        printf("Illegal input!!\nPlease input again!!");
        getchar();
    }
    
    if ((n > a[low]) || (n < a[high]))
    {
         while (low <= high)
        {
            mid = (high + low) / 2;
            if (n == a[mid])
            {      
                found = 1;
                printf("mid:a[%d] = %d", mid, a[mid]);
                break;
            }
            else if (n > a[mid])
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
    }
    return 0;
}
