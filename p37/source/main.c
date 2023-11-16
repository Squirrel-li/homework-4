#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

int linearSearch(const int *array, int key, int size) 
{
	for (int i = 0; i < size; i++) 
	{
		if (array[i] == key) return i;
	}
	return -1;
}

int main() 
{
	int a[SIZE];
	int searchKey;
	int element;

	for (int x = 0; x < SIZE; x++) 
	{
		a[x] = 2 * x;
	}

	printf("Enter integer search key:\n");
	scanf("%d", &searchKey);

	element = linearSearch(a, searchKey, SIZE);

	if (element != -1) printf("Found value is element %d\n", element);
	else printf("Value not found\n");

	system("pause");
	return 0;
}