/* 在Linux和Unix系统中没有conio.h这个文件，网上找一下资料 */
#include <stdio.h>
#include <conio.h>

int main (void)
{
    int i = 0;
    char c;
    while(1)
    {
        c='\0'
        while(c != 13 && c!= 27)
        {
            c = getch();
            printf("%c\n", c);
        }
        if (27 == c)
        {
            break;
        }
        i++;
        printf("The No. is %d\n", i);
    }
    printf("The end");
    return 0;
}
