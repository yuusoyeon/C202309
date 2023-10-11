#include <stdio.h>
#define STUDENTS 5

// 학생들을 성적에 따라 분류하고, 특정 성적을 가진 학생을 출력하는 함수
void classifyStudents(int scores[], char targetGrade) {
	printf("학생 성적 분류:\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) {
		// 학생의 성적을 등급으로 변환
		if (scores[i] >= 90) {
			grade = 'A';
		}
		else if (scores[i] >= 80) {
			grade = 'B';
		}
		else if (scores[i] >= 70) {
			grade = 'C';
		}
		else {
			grade = 'F';
		}
		// 특정 성적을 가진 학생 출력
		if (targetGrade == grade) {
			printf("%d 학생은 %C 점수를 받았습니다.", i + 1, targetGrade);
		}
	}
}

int main() {
	int scores[STUDENTS];  // 학생 성적을 저장할 배열

	// 학생 성적 입력
	for (int i = 0; i < STUDENTS; i++) {
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &scores[i] ); // 성적을 입력 받음
	}

	char ch = getchar();

	char target;
	printf("특정 점수(A, B, C, D, F)를 입력하시오: ");
	scanf_s("%c", &target, 1);

	// 학생들을 성적에 따라 분류하고, 특정 성적을 가진 학생 출력
	classifyStudents(scores, target);

	return 0;
}
