#include <stdio.h>

int main() {
	int num;

	printf("숫자를 입력하시오: ");
	scanf_s("%d", &num);
	//scanf_s 함수를 통해 변수의 값 저장

	if (num == 0) {
		printf("zero");
		//0을 입력하면 zero 출력
	}
	else if (num == 1) {
		printf("one");
		//1을 입력하면 one 출력
	}
	else if (num == 2) {
		printf("two");
		//2를 입력하면 two 출력
	}
	else {
		printf("not 0 ~ 2");
		//외의 값을 입력시 not 출력
	}
}