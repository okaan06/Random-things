#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int uslusayi(int x, int y) {

	int i, res=1;

	for (i = 1; i <= y; i++)
		res *= x;

	return res;

}

int main() {
	int taban, us;

	printf("2 sayi gir ilki taban ikinci us: ");
	scanf("%d %d", &taban, &us);

	printf("%d",uslusayi(taban, us));

	return 0;




}