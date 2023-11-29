#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STUDENTS 5
#define NAME_LENGTH 50

// �л� ������ ��� ����ü
struct Student {
    char name[NAME_LENGTH];
    int score;
};

// �л����� ������ ���� �з��ϰ�, Ư�� ������ ���� �л��� ����ϴ� �Լ�
void classifyStudents(struct Student* students, char targetGrade, int numStudents) {
    printf("�л� ���� �з�:\n");
    char grade = ' ';
    for (int i = 0; i < numStudents; i++) {
        // �л��� ������ ������� ��ȯ
        if (students[i].score >= 90) {
            grade = 'A';
        }
        else if (students[i].score >= 80) {
            grade = 'B';
        }
        else if (students[i].score >= 70) {
            grade = 'C';
        }
        else if (students[i].score >= 60) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }
        // Ư�� ������ ���� �л� ���
        if (targetGrade == grade) {
            printf("%s �л��� %c ����� �޾ҽ��ϴ�.\n", students[i].name, targetGrade);
        }
    }
}

// �л� ���� ������ ��ȯ�ϴ� �Լ�
int sumScores(struct Student* students, int numStudents) {
    int sum = 0;
    for (int i = 0; i < numStudents; i++) {
        sum += students[i].score;
    }
    return sum;
}

// �л� ���� ����� ��ȯ�ϴ� �Լ�
double averageScores(struct Student* students, int numStudents) {
    int sum = sumScores(students, numStudents);
    double average = (double)sum / numStudents;
    return average;
}

// �л� �� ���� ������ ����ϴ� �Լ�
void printRanks(struct Student* students, int numStudents) {
    printf("�л� ���� ����:\n");
    int* ranks = malloc(sizeof(int) * numStudents); // �������� �޸� �Ҵ�

    for (int i = 0; i < numStudents; i++) {
        ranks[i] = 1; // ��� �л��� 1���� �ʱ�ȭ
    }

    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < numStudents; j++) {
            if (students[j].score > students[i].score) {
                ranks[i]++; // ������ ���� �л��ϼ��� ���� ����
            }
        }
        printf("%s��(��) %d���Դϴ�.\n", students[i].name, ranks[i]);
    }

    // �������� �Ҵ��� �޸� ����
    free(ranks);
}

int main() {
    struct Student students[STUDENTS];

    // �л� ���� �Է�
    for (int i = 0; i < STUDENTS; i++) {
        printf("%d��° �л��� �̸��� �Է��ϼ���: ", i + 1);
        fgets(students[i].name, NAME_LENGTH, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // ���� ���� ����
        printf("%s �л��� ������ �Է��ϼ���: ", students[i].name);
        scanf_s("%d", &students[i].score);
        getchar(); // ���� ���� ó��
    }

    char targetGrade;
    printf("Ư�� ��� �Է� (A, B, C, D, F): ");
    scanf_s(" %c", &targetGrade, 1);

    // �л����� ������ ���� �з��ϰ�, Ư�� ������ ���� �л� ���
    classifyStudents(students, targetGrade, STUDENTS);

    // �л� ���� ���� ���
    int totalScore = sumScores(students, STUDENTS);
    printf("�л� ���� ����: %d\n", totalScore);

    // �л� ���� ��� ���
    double average = averageScores(students, STUDENTS);
    printf("�л� ���� ���: %.2lf\n", average);

    // �л� �� ���� ���� ���
    printRanks(students, STUDENTS);

    return 0;
}
