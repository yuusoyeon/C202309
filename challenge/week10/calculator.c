#include <stdio.h>

// 함수 원형 선언
void summation(double a, double b, double* result);
void subtraction(double a, double b, double* result);
void multiplication(double a, double b, double* result);
void division(double a, double b, double* result);

int main()
{
    double a, b;

    // 사용자로부터 두 개의 실수를 입력받음
    printf("두 정수를 입력하세요.\n");
    scanf_s("%lf %lf", &a, &b);

    double result;

    // 덧셈 함수 호출
    summation(a, b, &result);
    // 결과 출력
    printf("%.2lf + %.2lf = %.2lf\n", a, b, result);

    // 뺄셈 함수 호출
    subtraction(a, b, &result);
    // 결과 출력
    printf("%.2lf - %.2lf = %.2lf\n", a, b, result);

    // 곱셈 함수 호출
    multiplication(a, b, &result);
    // 결과 출력
    printf("%.2lf * %.2lf = %.2lf\n", a, b, result);

    // 나눗셈 함수 호출
    division(a, b, &result);
    // 결과 출력
    printf("%.2lf / %.2lf = %.2lf\n", a, b, result);

    return 0;
}

// 두 숫자를 더하는 함수
void summation(double a, double b, double* result) {
    *result = a + b;
}

// 두 숫자를 빼는 함수
void subtraction(double a, double b, double* result) {
    *result = a - b;
}

// 두 숫자를 곱하는 함수
void multiplication(double a, double b, double* result) {
    *result = a * b;
}

// 두 숫자를 나누는 함수
void division(double a, double b, double* result) {
        *result = a / b;
    }

