#include <stdio.h>
int main() {
	int num;
	int i = 1;
	printf("INSERT YOUR NUMBER : ");
	scanf_s("%d", &num);
	for (i; i <= num; i++) {
		printf("*");
		printf("\n");
		printf("\n");
	}
	return 0;
}