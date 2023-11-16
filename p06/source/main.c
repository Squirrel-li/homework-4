#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main()
{
	int s[SIZE];
	int j;

	for (j = 0; j < SIZE; j++)
	{
		s[j] = 2 + 2 * j;
	}

	printf("%s%13s\n", "Element", "value");

	for (j = 0; j < SIZE; j++)
	{
		printf("%7d%13d\n", j, s[j]);
	}

	system("pause");
	return 0;
}