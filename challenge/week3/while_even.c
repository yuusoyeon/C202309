#include <stdio.h>

int main() {
	int i = 0; 
	//i�� 0���� ����
	while (i < 10) {
		i++;
		//i�� �÷����� ����
		if (i % 2 == 0) {
			//i�� ¦���϶� �ڵ� ����
			continue;
		}
		printf("Hello world %d \n", i);
		//Hello World ���
	}
}
