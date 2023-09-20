#include <stdio.h>

int main() {
	int choice;

	printf("1. 파일 저장\n");
	printf("2. 저장 없이 닫기\n");
	printf("3. 종료\n");
	scanf_s("%d", &choice);
	//3가지의 선택 사항 만들기
	//scanf_s 함수를 통해 변수의 값 저장

	if (choice == 1) {
		printf("파일을 저장합니다.\n");
	}
	//1을 선택하면 파일을 저장 출력
	else if (choice == 2) {
		printf("저장 없이 닫습니다.\n");
	}
	//2를 선택하면 저장 없이 닫기 출력
	else if (choice == 3) {
		printf("종료합니다.\n");
	}
	//3을 선택하면 종료 출력
	else {
		printf("잘못 입력하셨습니다.");
	}
	//외에 입력 시 잘못 입력 출력한다. 
}