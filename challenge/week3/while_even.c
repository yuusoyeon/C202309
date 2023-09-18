#include <stdio.h>

int main() {
	int i = 0; 
	//i를 0으로 정의
	while (i < 10) {
		i++;
		//i를 늘려가며 덧셈
		if (i % 2 == 0) {
			//i가 짝수일때 코드 실행
			continue;
		}
		printf("Hello world %d \n", i);
		//Hello World 출력
	}
}
