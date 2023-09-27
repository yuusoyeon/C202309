#include <stdio.h>

int main()
{
	int floor;
	printf("몇 층을 쌓겠습니까? (5 ~ 100)");
	// 숫자를 입력 받아 쌓을 층을 정한다.
	scanf_s("%d", &floor);

	for (int i = floor; i > 0; i--) {
		//i를 floor부터 1까지 감소시키며 반복 
		for (int j = 0; j < floor - i; j++) {
			//공백을 출력하는 반복문
			printf("S");
			//공백을 대신하여 "S" 출력
		}
		for (int k = 0; k < i * 2 - 1; k++) {
			printf("*");
			//*을 반복하는 반복문, 출력
		}
		printf("\n");
		//각 층이 끝나면 줄바꿈 실시
	}
	return 0;

}