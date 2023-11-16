#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *a, int *b);

int main() 
{
	srand(time(0) << 5);
	const int len = rand() % 100 + 10;
	int arr[len];

	printf("Original value is :\n");
	for (int i = 0; i < len; i++) 
	{
		i[arr] = rand() % INT_MAX;
		printf("%d ", i[arr]);
	}

	puts("");
	printf("New value is :\n");

	for (int i = 0; i < len; i++) 
	{
		for (int j = 0; j < len - i - 1; j++) 
		{
			if (j[arr] > (j + 1)[arr]) 
			{
				swap(arr + j, arr + j + 1);
			}
		}
	}
	for (int i = 0; i < len; i++) 
		printf("%d ", i[arr]);
	system("pause");
	return 0;
}

void swap(int *a, int *b)
{
	int tmp = (*a);
	(*a) = (*b);
	(*b) = tmp;
}