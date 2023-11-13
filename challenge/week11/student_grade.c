#include <stdio.h>

#define STUDENTS 5

// �л����� ������ ���� �з��ϰ�, Ư�� ������ ���� �л��� ����ϴ� �Լ�
void classifyStudents(int* scores, char targetGrade) {
    printf("�л� ���� �з�:\n");
    char grade = ' ';
    for (int i = 0; i < STUDENTS; i++) {
        // �л��� ������ ������� ��ȯ
        if (*(scores + i) >= 90) {
            grade = 'A';
        }
        else if (*(scores + i) >= 80) {
            grade = 'B';
        }
        else if (*(scores + i) >= 70) {
            grade = 'C';
        }
        else if (*(scores + i) >= 60) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }
        // Ư�� ������ ���� �л� ���
        if (targetGrade == grade) {
            printf("%d �л��� %c ������ �޾ҽ��ϴ�.\n", i + 1, targetGrade);
        }
    }
}

// �л� ���� ������ ��ȯ�ϴ� �Լ�
int sumScores(int* scores) {
    int sum = 0;
    for (int i = 0; i < STUDENTS; i++) {
        sum += *(scores + i);
    }
    return sum;
}

// �л� ���� ����� ��ȯ�ϴ� �Լ�
double averageScores(int* scores) {
    int sum = sumScores(scores);
    double average = (double)sum / STUDENTS;
    return average;
}

// �л� �� ���� ������ ����ϴ� �Լ�
void printRanks(int* scores) {
    printf("�л� ���� ����:\n");
    int ranks[STUDENTS];
    for (int i = 0; i < STUDENTS; i++) {
        ranks[i] = 1; // ��� �л��� 1���� �ʱ�ȭ
    }
    for (int i = 0; i < STUDENTS; i++) {
        for (int j = 0; j < STUDENTS; j++) {
            if (*(scores + j) > *(scores + i)) {
                ranks[i]++; // ������ ���� �л��ϼ��� ���� ����
            }
        }
        printf("�л� %d�� %d���Դϴ�.\n", i + 1, ranks[i]);
    }
}

int main() {
    int scores[STUDENTS];

    // �л� ���� �Է�
    for (int i = 0; i < STUDENTS; i++) {
        printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
        scanf_s("%d", scores + i);
    }

    char ch = getchar(); // ���� ���� ó��

    char target;
    printf("Ư�� ���� (A, B, C, D, F)�� �Է��Ͻÿ�: ");
    scanf_s(" %c", &target, 1);

    // �л����� ������ ���� �з��ϰ�, Ư�� ������ ���� �л� ���
    classifyStudents(scores, target);

    // �л� ���� ���� ���
    int totalScore = sumScores(scores);
    printf("�л� ���� ����: %d\n", totalScore);

    // �л� ���� ��� ���
    double average = averageScores(scores);
    printf("�л� ���� ���: %.2lf\n", average);

    // �л� �� ���� ���� ���
    printRanks(scores);

    return 0;
}
