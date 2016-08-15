#include <stdio.h>

int main(void)
{
	int n;
	do
	{
		int input_int;
		printf ("Non-negative integer please: \n");
		n = scanf("%d", &input_int);
	}
	while (n < 0);

	for (int i = sizeof(int) * 8 - 1; i >= 0; i--)
	{
		int mask = 1 << i;
		if (n & mask)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}
