#include <stdio.h>

int main() {
	int num;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &num);
	//scanf_s �Լ��� ���� ������ �� ����

	if (num == 0) {
		printf("zero");
		//0�� �Է��ϸ� zero ���
	}
	else if (num == 1) {
		printf("one");
		//1�� �Է��ϸ� one ���
	}
	else if (num == 2) {
		printf("two");
		//2�� �Է��ϸ� two ���
	}
	else {
		printf("not 0 ~ 2");
		//���� ���� �Է½� not ���
	}
}