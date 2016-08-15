#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("Please enter the words:\n");
	char *str;
	scanf("%s", str);
	if (str != NULL)
		for (int i = 0; i <= 10000000; i++)
		{
			char c = str[i];
			printf("Character #%d is %lu\n", i, c);
		}
}
