#include <stdio.h>

int main() {
	int choice;

	printf("1. ���� ����\n");
	printf("2. ���� ���� �ݱ�\n");
	printf("3. ����\n");
	scanf_s("%d", &choice);
	//3������ ���� ���� �����
	//scanf_s �Լ��� ���� ������ �� ����

	if (choice == 1) {
		printf("������ �����մϴ�.\n");
	}
	//1�� �����ϸ� ������ ���� ���
	else if (choice == 2) {
		printf("���� ���� �ݽ��ϴ�.\n");
	}
	//2�� �����ϸ� ���� ���� �ݱ� ���
	else if (choice == 3) {
		printf("�����մϴ�.\n");
	}
	//3�� �����ϸ� ���� ���
	else {
		printf("�߸� �Է��ϼ̽��ϴ�.");
	}
	//�ܿ� �Է� �� �߸� �Է� ����Ѵ�. 
}