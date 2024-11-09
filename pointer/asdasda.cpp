#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func(int x, double y, double z) {

	y = x + 2;
	x = y / 2;
	z = x * 2;
	printf("%d %f %f", x, y, z);
}
int main(void) {


	int n1;
	double n2, n3=0;
	n1 = 7;
	n2 = 4.5;
	func(n1, n2, n3);
	printf("%.1d %.1f %.1f", n1, n2, n3);













	return 0;
 }