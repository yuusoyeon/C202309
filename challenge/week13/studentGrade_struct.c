#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STUDENTS 5
#define NAME_LENGTH 50

// 학생 정보를 담는 구조체
struct Student {
    char name[NAME_LENGTH];
    int score;
};

// 학생들을 성적에 따라 분류하고, 특정 성적을 가진 학생을 출력하는 함수
void classifyStudents(struct Student* students, char targetGrade, int numStudents) {
    printf("학생 성적 분류:\n");
    char grade = ' ';
    for (int i = 0; i < numStudents; i++) {
        // 학생의 성적을 등급으로 변환
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
        // 특정 성적을 가진 학생 출력
        if (targetGrade == grade) {
            printf("%s 학생은 %c 등급을 받았습니다.\n", students[i].name, targetGrade);
        }
    }
}

// 학생 성적 총합을 반환하는 함수
int sumScores(struct Student* students, int numStudents) {
    int sum = 0;
    for (int i = 0; i < numStudents; i++) {
        sum += students[i].score;
    }
    return sum;
}

// 학생 성적 평균을 반환하는 함수
double averageScores(struct Student* students, int numStudents) {
    int sum = sumScores(students, numStudents);
    double average = (double)sum / numStudents;
    return average;
}

// 학생 별 성적 순위를 출력하는 함수
void printRanks(struct Student* students, int numStudents) {
    printf("학생 성적 순위:\n");
    int* ranks = malloc(sizeof(int) * numStudents); // 동적으로 메모리 할당

    for (int i = 0; i < numStudents; i++) {
        ranks[i] = 1; // 모든 학생을 1위로 초기화
    }

    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < numStudents; j++) {
            if (students[j].score > students[i].score) {
                ranks[i]++; // 성적이 높은 학생일수록 순위 증가
            }
        }
        printf("%s은(는) %d위입니다.\n", students[i].name, ranks[i]);
    }

    // 동적으로 할당한 메모리 해제
    free(ranks);
}

int main() {
    struct Student students[STUDENTS];

    // 학생 정보 입력
    for (int i = 0; i < STUDENTS; i++) {
        printf("%d번째 학생의 이름을 입력하세요: ", i + 1);
        fgets(students[i].name, NAME_LENGTH, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // 개행 문자 제거
        printf("%s 학생의 성적을 입력하세요: ", students[i].name);
        scanf_s("%d", &students[i].score);
        getchar(); // 개행 문자 처리
    }

    char targetGrade;
    printf("특정 등급 입력 (A, B, C, D, F): ");
    scanf_s(" %c", &targetGrade, 1);

    // 학생들을 성적에 따라 분류하고, 특정 성적을 가진 학생 출력
    classifyStudents(students, targetGrade, STUDENTS);

    // 학생 성적 총합 출력
    int totalScore = sumScores(students, STUDENTS);
    printf("학생 성적 총합: %d\n", totalScore);

    // 학생 성적 평균 출력
    double average = averageScores(students, STUDENTS);
    printf("학생 성적 평균: %.2lf\n", average);

    // 학생 별 성적 순위 출력
    printRanks(students, STUDENTS);

    return 0;
}
