#include <stdio.h>

int hapf(int value);

int main()
{
    // 1���� 10������ ���� ���
    printf("1���� 10������ ���� %d\n", hapf(10));

    // 1���� 100������ ���� ���
    printf("1���� 100������ ���� %d\n", hapf(100));

    // 1���� 1000������ ���� ���
    printf("1���� 1000������ ���� %d\n", hapf(1000));
     
    return 0;
}

// ���� ����ϴ� �Լ� ����
int hapf(int value)
{
    // �ʱⰪ�� ���� ������ ���� ����
    int i = 1;
    int hap = 0;

    // i�� value ������ ���� �ݺ�
    while (i <= value)
    {
        // ��������� �տ� i�� ����
        hap = hap + i;

        // i�� 1 ������Ŵ
        i = i + 1;
    }

    return hap;
}