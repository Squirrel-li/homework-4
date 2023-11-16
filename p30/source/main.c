#include <stdio.h>
#include <stdlib.h>

void inverse(int a[]) {
	for (int i = 0; i < 3 / 2; i++) {
		int tmp = a[i];
		a[i] = a[3 - i - 1];
		a[3 - i - 1] = tmp;
	}
}

int main(void)
{
	int arr[3] = { 3,5,7 };
	for (int i = 0; i < 3; i++) {
		printf("%d  ", arr[i]);
	}
	putchar('\n');

	inverse(arr);

	for (int i = 0; i < 3; i++) {
		printf("%d  ", arr[i]);
	}
	putchar('\n');

	system("pause");
	return 0;
}