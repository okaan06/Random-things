#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int min2(int x, int y) {
	int min;

	min = x;

	if (y < x)
		min = y;
	return min;
		

}

int min4(int x, int y, int z, int a) {

	int min;

	min = min2(x, y);
	if (min2(z, a) < min)
		min = min2(z, a);

	return min;


}

int main(void) {

	int n1, n2, n3, n4;

	printf("Enter 4 numbers: ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	printf("\nMinimum number is: %d", min4(n1, n2, n3, n4));







	return 0;

}