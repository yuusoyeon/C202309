#include <stdio.h>

int main()
{
	int x = 4;
	int y = 2;
	int z;
	//x 와 y 변수에 값 대입
	z = x + y;
	printf("z = x + y = %d\n", z);
	z = x - y;
	printf("z = x - y = %d\n", z);
	z = x * y;
	printf("z = x * y = %d\n", z);
	z = x / y;
	printf("z = x / y = %d\n", z);

	//x와 y를 더하고 빼고 곱하고 나눠 z 값에 저장후 출력
	//z = x + y = 6
	//z = x - y = 2
	//z = x * y = 8
	//z = x / y = 2
}