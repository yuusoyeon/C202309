#include <stdio.h>

int main()
{
	int floor;
	printf("¸î ÃþÀ» ½×°Ú½À´Ï±î? (5~100)");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor ; i++) {
		for (int j = 0; j < floor - 1 - i; j++) {
			printf("S");
		}
		for (int k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}