#include <stdio.h>
int main() {
	int num;
	int i = 1;
	printf("INSERT YOUR NUMBER : ");
	scanf_s("%d",&num);
	while (i <= num) {
		printf("*");
		printf("\n");
		printf("\n");
		i++;
	}
	return 0;
}