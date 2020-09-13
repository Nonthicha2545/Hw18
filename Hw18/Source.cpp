#include<stdio.h>
int main()
{
	int i, j, x, z, num;
	int a, b, c, d;
	scanf_s("%d", &num);
	// rectangle above
	for (i = 1; i <= num; i++) {
		for (j = num; j >= i; j--) {
			printf(" ");
		}
		for (x = 1; x < i; x++) {
			printf("*");
		}
		for (z = 1; z <= i; z++) {
			printf("*");
		}
		printf("\n");
	}

	//rectangle below
	for (a = 1; a <= num; a++) {
		for (b = 1; b <a; b++) {
			printf(" ");
		}
		for (c = num; c > b; c--) {
			printf("*");
		}
		for (d = num; d >= a; d--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}