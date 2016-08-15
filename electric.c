#include <stdio.h>
#define RATE1 0.12589    //第一个360kwh的费率
#define RATE2 0.17901    //下一个320kwh的费率
#define RATE3 0.20971    //超过680kwh的费率
#define BREAK1 360.0     //费率的第一个分界点
#define BREAK2 680.0     //费率的第二个分界点
#define BASE1 (RATE1 * BREAK1)
                         //用电360kwh的费用
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))
                         //用电680kwhr 费用

int main (void)
{
    double kwh;  //小时数
    double bill; //费用

    printf ("Please enter the kwh used.\n");
    scanf ("%lf", &kwh);
    if (kwh <= BREAK1)
        bill = RATE1 * BREAK1;
    else if (kwh <= BREAK2)
        bill = BASE1 + (RATE2 * (kwh - BREAK1));
    else
        bill = BASE2 + (RATE3 * (kwh - BREAK2));
    printf ("The change for %.1f kwh is $%1.2f.\n", kwh, bill);
    return 0;
}

