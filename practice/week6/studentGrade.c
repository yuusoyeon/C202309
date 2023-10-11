#include <stdio.h>
#define STUDENTS 5

// �л����� ������ ���� �з��ϰ�, Ư�� ������ ���� �л��� ����ϴ� �Լ�
void classifyStudents(int scores[], char targetGrade) {
	printf("�л� ���� �з�:\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) {
		// �л��� ������ ������� ��ȯ
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
		// Ư�� ������ ���� �л� ���
		if (targetGrade == grade) {
			printf("%d �л��� %C ������ �޾ҽ��ϴ�.", i + 1, targetGrade);
		}
	}
}

int main() {
	int scores[STUDENTS];  // �л� ������ ������ �迭

	// �л� ���� �Է�
	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i] ); // ������ �Է� ����
	}

	char ch = getchar();

	char target;
	printf("Ư�� ����(A, B, C, D, F)�� �Է��Ͻÿ�: ");
	scanf_s("%c", &target, 1);

	// �л����� ������ ���� �з��ϰ�, Ư�� ������ ���� �л� ���
	classifyStudents(scores, target);

	return 0;
}
