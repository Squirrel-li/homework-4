#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void mA(int b[], int size);
void mE(int e);

int main()
{
	int a[SIZE] = { 0, 1, 2, 3, 4 };
	int i;

	printf("Effects of passing entire array by reference:\n\nThe values of ths original array are:\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%3d", a[i]);
	}
	puts("");

	mA(a, SIZE);

	printf("The values of the modiffed array are:\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%3d", a[i]);
	}
	printf("\n\n\nEffects of passing array elemant"
		"by value:\n\nThe value ofa[3] is %d\n", a[3]);

	mE(a[3]);
	printf("The value of a[3] is %d\n", a[3]);

	system("pause");
	return 0;
}

void mA(int b[], int size)
{
	int j;
	for (j = 0; j < size; j++)
	{
		b[j] *= 2;
	}
}

void mE(int e)
{
	printf("Value in modifyElement is %d\n", e *= 2);
}
