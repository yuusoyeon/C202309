#include <stdio.h>

int main()
{
	int floor;
	printf("�� ���� �װڽ��ϱ�? (5 ~ 100)");
	// ���ڸ� �Է� �޾� ���� ���� ���Ѵ�.
	scanf_s("%d", &floor);

	for (int i = floor; i > 0; i--) {
		//i�� floor���� 1���� ���ҽ�Ű�� �ݺ� 
		for (int j = 0; j < floor - i; j++) {
			//������ ����ϴ� �ݺ���
			printf("S");
			//������ ����Ͽ� "S" ���
		}
		for (int k = 0; k < i * 2 - 1; k++) {
			printf("*");
			//*�� �ݺ��ϴ� �ݺ���, ���
		}
		printf("\n");
		//�� ���� ������ �ٹٲ� �ǽ�
	}
	return 0;

}