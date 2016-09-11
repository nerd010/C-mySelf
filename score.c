#include <stdio.h>
int max = 0;
int min = 0;

int main (void)
{
    float ave;
    float score[10] = {0};

    float average(float array[], int n);
    int n = 10;
    printf ("请输入10个数字：\n");

    for (int i = 0; i < n; i++)
    {
        scanf ("%f", &score[i]);
    }
    ave = average(score, n);
    printf ("Max = %d Min = %d average = %.2f\n", max, min, ave);

    return 0;
}

float average(float score[], int n)
{
    float sum = 0;
    float average = 0; 
    max = min = score[0];

    for (int i = 0; i < n; i++)
    {
        if (max < score[i])
        {
            max = score[i];
        }
        else if (min > score[i])
        {
            min = score[i];
        }
        sum += score[i];
    }
    average = sum / n;
    return average;
}
