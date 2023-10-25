#include <stdio.h>
#include <string.h> 

#define MAX_TASKS 10
#define CHAR_NUM 100

char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // �� �� ����� �����ϱ� ���� 2���� �迭
int taskCount = 0; // �� ���� ���� �����ϱ� ���� ����

// �� �� �߰� �Լ�
void addTask(char task[]) {
    printf("�� ���� �Է��ϼ��� (���� ���� �Է��ϼ���): ");
    scanf_s("%99s", task, CHAR_NUM);
    strcpy_s(tasks[taskCount], CHAR_NUM, task);
    printf("�� �� ""%s""�� ����Ǿ����ϴ�\n\n", task);

    //�Է� ���� ����� 
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// �� �� ���� �Լ�
void delTask(int delIndex, int taskCount) {
    printf("%d. %s : �� ���� �����մϴ�.\n", delIndex, tasks[delIndex - 1]);

    // Ư�� �ε����� �� �� ���� �� �ڿ� �ִ� �� �� ������ �ű��
    for (int i = delIndex; i < taskCount + 1; i++) {
        strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
    }
}

// �� �� ��� ��� �Լ�
void printTask(int taskCount) {
    for (int i = 0; i < taskCount; i++) {
        printf("%d. %s \n", i + 1, tasks[i]);
    }
    printf("\n");
}

int main() {
    printf("TODO ����Ʈ ����! \n");

    while (1) {
        int choice = -1; // ����� �Է� �޴��� �����ϱ� ���� ����

        // ����ڿ��� �޴��� ����ϰ�, �޴��� �Է¹ޱ�
        printf("------------------\n");
        printf("�޴��� �Է����ּ���.\n");
        printf("1. �� �� �߰�\n2. �� �� ����\n3. ��� ����\n4. ����\n5. �� �� ����\n");
        printf("���� �� �� �� = %d\n", taskCount);
        printf("------------------\n");
        scanf_s("%d", &choice);

        int terminate = 0;
        int delIndex = -1; // �� �� ������ ���� �ε���

        int modifyIndex = -1; // �� �� ������ ���� �ε���
        char ch;

        // �Է¿� ���� ��� ����
        switch (choice) {
        case 1:
            addTask(tasks[taskCount]);
            taskCount++;
            break;
        case 2:
            printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����):");
            scanf_s("%d", &delIndex);
            if (delIndex > taskCount || delIndex <= 0) {
                printf("���� ������ ������ϴ�.\n");
            }
            else {
                delTask(delIndex, taskCount);
                taskCount -= 1;
            }
            break;
        case 3:
            printf("�� �� ���\n");
            printTask(taskCount);
            break;
        case 4:
            terminate = 1;
            break;
        case 5:
            printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����): ");
            scanf_s("%d", &modifyIndex);
            ch = getchar();
            printf("���ο� �� ���� �Է����ּ���");
            scanf_s("%s", tasks[modifyIndex - 1], (int)sizeof(tasks[modifyIndex - 1]));
            printf("���ο� �� ���� �߰��Ǿ����ϴ�: %d. %s\n", modifyIndex, tasks[modifyIndex - 1]);
            break;
        default:
            printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
        }

        if (terminate == 1) {
            printf("���Ḧ �����ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n");
            break;
        }
        if (taskCount == 10) {
            printf("�� ���� %d���� �� á���ϴ�.", taskCount);
            break;
        }
    }
    return 0;
}
