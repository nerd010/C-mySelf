#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int n = 0;
	printf("\n");
	for (int i = 0; i < argc; i++)
		for (int j = 0, n = strlen(argv[i]); j < n; j++)
			printf("%c\n", argv[i][j]);
		printf("\n");
	printf("\n");
}
