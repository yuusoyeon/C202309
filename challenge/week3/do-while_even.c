#include <stdio.h>

int main() {
	int i = 0;
	//i�� 0���� ����
	do {
		i++;
		//i�� �÷����� ����
		if (i % 2 == 0) {
			//i�� ¦���϶� �ڵ� ����
			continue;
		}
		printf("Hello World %d \n", i);
		//Hello World ���
	} while (i < 10);
	//i�� 10���� ����������