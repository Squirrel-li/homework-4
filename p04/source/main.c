#include <stdio.h>
#include <stdlib.h>

int main()
{
	int s[10];
	int i;

	for (i = 0; i < 10; i++)
	{
		s[i] =0;
	}

	printf("%s%13s\n", "Element", "value");

	for (i = 0; i < 10; i++)
	{
		printf("%7d%13d\n", i, s[i]);
	}

	system("pause");
	return 0;
}