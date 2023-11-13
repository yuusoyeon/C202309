#include <stdio.h>
#define STUDENTS 5

// 학생들을 성적에 따라 분류하고, 특정 성적을 가진 학생을 출력하는 함수
void classifyStudents(int* scores, char targetGrade) {
    printf("학생 성적 분류:\n");
    char grade = ' ';
    for (int i = 0; i < STUDENTS; i++) {
        // 학생의 성적을 등급으로 변환
        if (*(scores + i) >= 90) {
            grade = 'A';
        }
        else if (*(scores + i) >= 80) {
            grade = 'B';
        }
        else if (*(scores + i) >= 70) {
            grade = 'C';
        }
        else {
            grade = 'F';
        }
        // 특정 성적을 가진 학생 출력
        if (targetGrade == grade) {
            printf("%d 학생은 %C 점수를 받았습니다.\n", i + 1, targetGrade);
        }
    }
}

// 학생 성적 총합을 반환하는 함수
int sumScores(int* scores) {
    int sum = 0;
    for (int i = 0; i < STUDENTS; i++) {
        sum += *(scores + i);
    }
    return sum;
}

// 학생 성적 평균을 반환하는 함수
double averageScores(int* scores) {
    int sum = sumScores(scores); // 성적 총합 계산
    return (double)sum / STUDENTS;
}

// 학생 별 성적 순위를 출력하는 함수
void printRanks(int* scores) {
    printf("학생 성적 순위:\n");
    int ranks[STUDENTS];
    for (int i = 0; i < STUDENTS; i++) {
        ranks[i] = 1; // 모든 학생을 1위로 초기화
    }
    for (int i = 0; i < STUDENTS; i++) {
        for (int j = 0; j < STUDENTS; j++) {
            if (*(scores + j) > *(scores + i)) {
                ranks[i]++; // 성적이 높은 학생일수록 순위 증가
            }
        }
    }
    for (int i = 0; i < STUDENTS; i++) {
        printf("학생 %d은 %d위입니다.\n", i + 1, ranks[i]);
    }
}

int main() {
    int scores[STUDENTS]; // 학생 성적을 저장할 배열

    // 학생 성적 입력
    for (int i = 0; i < STUDENTS; i++) {
        printf("학생 %d의 성적을 입력하세요: ", i + 1);
        scanf_s("%d", &scores[i]); // 성적을 입력 받음
    }

    char ch = getchar();

    char target;
    printf("특정 성적(A, B, C, D, F)를 입력하시오: ");
    scanf_s(" %c", &target);
    // 학생들을 성적에 따라 분류하고, 특정 성적을 가진 학생 출력
    classifyStudents(scores, target);

    // 학생 성적 총합 출력
    int totalScore = sumScores(scores);
    printf("학생 성적 총합: %d\n", totalScore);

    // 학생 성적 평균 출력
    double average = averageScores(scores);
    printf("학생 성적 평균: %.2lf\n", average);

    // 학생 별 성적 순위 출력
    printRanks(scores);

    return 0;
}
