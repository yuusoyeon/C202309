#include <stdio.h>

#define STUDENTS 5

void classifyStudents(int* scores, char targetGrade) {
    printf("학생 성적 분류:\n");
    char grade = ' ';
    for (int i = 0; i < STUDENTS; i++) {
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
        if (targetGrade == grade) {
            printf("%d 학생은 %c 점수를 받았습니다.\n", i + 1, targetGrade);
        }
    }
}

int sumScores(int* scores) {
    int sum = 0;
    for (int i = 0; i < STUDENTS; i++) {
        sum += *(scores + i);
    }
    return sum;
}

double averageScores(int* scores) {
    int sum = sumScores(scores);
    double average = (double)sum / STUDENTS;
    return average;
}

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
        printf("학생 %d은 %d위입니다.\n", i + 1, ranks[i]);
    }
}

int main() {
    int scores[STUDENTS];

    for (int i = 0; i < STUDENTS; i++) {
        printf("학생 %d의 성적을 입력하세요: ", i + 1);
        scanf_s("%d", scores + i);
    }

    char ch = getchar();

    char target;
    printf("특정 점수 (A, B, C, D, F)를 입력하시오: ");
    scanf_s(" %c", &target, 1);

    classifyStudents(scores, target);

    int totalScore = sumScores(scores);
    printf("학생 성적 총합: %d\n", totalScore);

    double average = averageScores(scores);
    printf("학생 성적 평균: %.2lf\n", average);

    printRanks(scores);

    return 0;
}
