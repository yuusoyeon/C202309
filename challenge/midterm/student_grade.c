#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
#define CHARNUM 20

void printStudentAverage(char studentNames[][CHARNUM], double studentScores[][SUBJECTS]);
void printSubjectAverage(char subjectNames[][CHARNUM], double studentScores[][SUBJECTS]);

int main() {
    char subjectNames[SUBJECTS][CHARNUM] = { "퀴즈", "중간고사", "기말고사" };
    char studentNames[STUDENTS][CHARNUM] = { "" };
    double studentScores[STUDENTS][SUBJECTS] = { 0.0 };

    printf("학생 %d명의 이름의 입력을 시작합니다.\n", STUDENTS);
    for (int i = 0; i < STUDENTS; i++) {
        printf("%d번째 학생의 이름을 입력하세요: \n", i + 1);
        scanf_s("%s", studentNames[i], (int)sizeof(studentNames[i]));
        getchar();
    }

    // 입력된 학생 이름이 잘 저장되었는지 확인하는 코드 블록
    printf("학생 이름이 모두 입력되었습니다. \n");
    printf("입력된 학생 이름은 다음과 같습니다. \n");
    for (int i = 0; i < STUDENTS; i++) {
        printf("%s", studentNames[i]);
        if (i != STUDENTS - 1) {
            printf(", ");
        }
    }

    printf("\n");
    printf("--------------------\n");
    printf("각 학생의 %s, %s, %s 점수를 차례대로 입력해주세요. (띄어쓰기 구분)\n ", subjectNames[0], subjectNames[1], subjectNames[2]);

    for (int i = 0; i < STUDENTS; i++) {
        printf("    %s의 성적: ", studentNames[i]);
        scanf_s("%lf %lf %lf", &studentScores[i][0], &studentScores[i][1], &studentScores[i][2]);
    }

    printf("학생들의 시험 점수가 모두 입력 되었습니다.\n");
    printf("--------------------\n");
    printf("학생 별 성적은 다음과 같습니다 \n");

    printStudentAverage(studentNames, studentScores);

    printf("과목 별 평균 점수는 아래와 같습니다. \n");

    printSubjectAverage(subjectNames, studentScores);
    
    printf("프로그램을 종료합니다.");

}

void printStudentAverage(char studentNames[][CHARNUM], double studentScores[][SUBJECTS]) {

    for (int i = 0; i < STUDENTS; i++) {
        double sum = 0;
        for (int j = 0; j < SUBJECTS; j++) {
            sum = sum + studentScores[i][j];
        }
        double studentAverage = sum / SUBJECTS;
        printf("    %s의 평균점수: %.2lf\n", studentNames[i], studentAverage);
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
        printf("    %s의 평균점수는 %.2lf 입니다.\n", subjectNames[i], subjectAverage);
    }
}
