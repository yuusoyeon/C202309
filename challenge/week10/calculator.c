#include <stdio.h>

// �Լ� ���� ����
void summation(double a, double b, double* result);
void subtraction(double a, double b, double* result);
void multiplication(double a, double b, double* result);
void division(double a, double b, double* result);

int main()
{
    double a, b;

    // ����ڷκ��� �� ���� �Ǽ��� �Է¹���
    printf("�� ������ �Է��ϼ���.\n");
    scanf_s("%lf %lf", &a, &b);

    double result;

    // ���� �Լ� ȣ��
    summation(a, b, &result);
    // ��� ���
    printf("%.2lf + %.2lf = %.2lf\n", a, b, result);

    // ���� �Լ� ȣ��
    subtraction(a, b, &result);
    // ��� ���
    printf("%.2lf - %.2lf = %.2lf\n", a, b, result);

    // ���� �Լ� ȣ��
    multiplication(a, b, &result);
    // ��� ���
    printf("%.2lf * %.2lf = %.2lf\n", a, b, result);

    // ������ �Լ� ȣ��
    division(a, b, &result);
    // ��� ���
    printf("%.2lf / %.2lf = %.2lf\n", a, b, result);

    return 0;
}

// �� ���ڸ� ���ϴ� �Լ�
void summation(double a, double b, double* result) {
    *result = a + b;
}

// �� ���ڸ� ���� �Լ�
void subtraction(double a, double b, double* result) {
    *result = a - b;
}

// �� ���ڸ� ���ϴ� �Լ�
void multiplication(double a, double b, double* result) {
    *result = a * b;
}

// �� ���ڸ� ������ �Լ�
void division(double a, double b, double* result) {
        *result = a / b;
    }

