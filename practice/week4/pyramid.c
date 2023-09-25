#include <stdio.h>

int main()
{
	int floor;
	printf("몇 층을 쌓겠습니까? (5~100)");
	//입력한 숫자의 줄을 출력
	scanf_s("%d", &floor);

	for (int i = 0; i < floor ; i++) {
		for (int j = 0; j < floor - 1 - i; j++) {
			//숫자 - 1 -i 만큼 출력 
			printf("S");
		}
		for (int k = 0; k < i * 2 + 1; k++) {
			//숫자 i*2+1 만큼 *을 출력
			printf("*");
		}
		printf("\n");
	}
	return 0;
}