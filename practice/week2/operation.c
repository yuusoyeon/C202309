#include <stdio.h>

int main()
{
	int x = 4;
	int y = 2;
	int z;
	//x �� y ������ �� ����
	z = x + y;
	printf("z = x + y = %d\n", z);
	z = x - y;
	printf("z = x - y = %d\n", z);
	z = x * y;
	printf("z = x * y = %d\n", z);
	z = x / y;
	printf("z = x / y = %d\n", z);

	//x�� y�� ���ϰ� ���� ���ϰ� ���� z ���� ������ ���
	//z = x + y = 6
	//z = x - y = 2
	//z = x * y = 8
	//z = x / y = 2
}