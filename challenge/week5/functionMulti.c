#include <stdio.h>

long multiF(int start, int end);

void main()
{
    // multiF �Լ��� ȣ���Ͽ� ����� ���
    printf("1���� 2������ ��: %ld\n", multiF(1, 2));
    printf("1���� 3������ ��: %ld\n", multiF(1, 3));
    printf("1���� 5������ ��: %ld\n", multiF(1, 5));

}

// for ���� �̿��Ͽ� �־��� ���� ���� �������� ���ϴ� multiF �Լ� ����
// ��ȯ�� long
long multiF(int start, int end)
{
    // ����� ������ ���� �ʱ�ȭ
    long result = 1;

    // start���� end������ ������ ����
    for (int i = start; i <= end; i++)
    {
        result *= i;
    }

    return result;
}
