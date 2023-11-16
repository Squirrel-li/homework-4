#include <stdio.h>
#include <stdlib.h>

int addOne(int &a) {
	a++;
	printf("xref=%d\n", a);
	return a;
}

int main() {
	int x = 100;
	addOne(x);
	printf("x=%d\n", x);
	
	system("pause");
	return 0;
}