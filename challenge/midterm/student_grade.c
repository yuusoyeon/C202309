#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
#define CHARNUM 20

void printStudentAverage(char studentNames[][CHARNUM], double studentScores[][SUBJECTS]);
void printSubjectAverage(char subjectNames[][CHARNUM], double studentScores[][SUBJECTS]);

int main() {
    char subjectNames[SUBJECTS][CHARNUM] = { "����", "�߰����", "�⸻���" };
    char studentNames[STUDENTS][CHARNUM] = { "" };
    double studentScores[STUDENTS][SUBJECTS] = { 0.0 };

    printf("�л� %d���� �̸��� �Է��� �����մϴ�.\n", STUDENTS);
    for (int i = 0; i < STUDENTS; i++) {
        printf("%d��° �л��� �̸��� �Է��ϼ���: \n", i + 1);
        scanf_s("%s", studentNames[i], (int)sizeof(studentNames[i]));
        getchar();
    }

    // �Էµ� �л� �̸��� �� ����Ǿ����� Ȯ���ϴ� �ڵ� ���
    printf("�л� �̸��� ��� �ԷµǾ����ϴ�. \n");
    printf("�Էµ� �л� �̸��� ������ �����ϴ�. \n");
    for (int i = 0; i < STUDENTS; i++) {
        printf("%s", studentNames[i]);
        if (i != STUDENTS - 1) {
            printf(", ");
        }
    }

    printf("\n");
    printf("--------------------\n");
    printf("�� �л��� %s, %s, %s ������ ���ʴ�� �Է����ּ���. (���� ����)\n ", subjectNames[0], subjectNames[1], subjectNames[2]);

    for (int i = 0; i < STUDENTS; i++) {
        printf("    %s�� ����: ", studentNames[i]);
        scanf_s("%lf %lf %lf", &studentScores[i][0], &studentScores[i][1], &studentScores[i][2]);
    }

    printf("�л����� ���� ������ ��� �Է� �Ǿ����ϴ�.\n");
    printf("--------------------\n");
    printf("�л� �� ������ ������ �����ϴ� \n");

    printStudentAverage(studentNames, studentScores);

    printf("���� �� ��� ������ �Ʒ��� �����ϴ�. \n");

    printSubjectAverage(subjectNames, studentScores);
    
    printf("���α׷��� �����մϴ�.");

}

void printStudentAverage(char studentNames[][CHARNUM], double studentScores[][SUBJECTS]) {

    for (int i = 0; i < STUDENTS; i++) {
        double sum = 0;
        for (int j = 0; j < SUBJECTS; j++) {
            sum = sum + studentScores[i][j];
        }
        double studentAverage = sum / SUBJECTS;
        printf("    %s�� �������: %.2lf\n", studentNames[i], studentAverage);
    }

    printf("-----------------------\n");
}

void printSubjectAverage(char subjectNames[][CHARNUM], double studentScores[][SUBJECTS]) {

    for (int i = 0; i < SUBJECTS; i++) {
        double sum = 0;
        for (int j = 0; j < STUDENTS; j++) {
            sum = sum + studentScores[j][i];
        }
        double subjectAverage = sum / STUDENTS;
        printf("    %s�� ��������� %.2lf �Դϴ�.\n", subjectNames[i], subjectAverage);
    }
}
