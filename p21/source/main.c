#include <stdio.h>
#include <stdlib.h>

void staticArrayInit(void);
void automaticArraylnit(void);

int main(void)
{
	printf("F1rst call to each function : \n");
	staticArrayInit();
	automaticArraylnit();

	printf("\n\nSecond call to each function : \n");
	staticArrayInit();
	automaticArraylnit();
	printf("\n");

	system("pause");
	return 0;
}
void staticArrayInit(void)
{
	static int array1[3];
	int i;

	printf("\nValues on entering staticArraylnit : \n");
	for (i = 0; i <= 2; i++)
		printf("arrayl[%d] = %d ", i, array1[i]);

	printf("\nValues on exiting staticArrayInit : \n");

	for (i = 0; i <= 2; i++)
		printf("arrayl[%d) = %d ", i, array1[i] += 5);
}


void automaticArraylnit(void)
{
	int array2[3] = { 1, 2, 3 };
	int i;

	printf("\n\nValues on entering automicArraylnit : \n");

	for (i = 0; i <= 2; i++)
		printf("array2[%d) = %d ", i, array2[i]);

	printf("\nValues on exiting autoMicArraylnit : \n");

	for (i = 0; i <= 2; i++)
		printf("array2[%d] = %d ", i, array2[i] += 5);
}
