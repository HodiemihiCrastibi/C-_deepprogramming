#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char name[50], date[20], greeting[50];
    int student_id;
    int i = 1;

    // ���� �Է� �ޱ�
    // printf("�̸��� �Է��ϼ���: ");
    scanf("%s", name);

    // printf("�й��� �Է��ϼ���: ");
    scanf_s("%d", &student_id);

    // printf("��¥�� �Է��ϼ���: ");
    scanf("%s", date);

    // printf("�λ縻�� �Է��ϼ���: ");
    scanf("%s", greeting);

    // 10ȸ ���
    while (i <= 10) {
        // printf("\n\n=== %d��° ��� ===\n", i);
        printf("%s %d %s %s\n", name, student_id, date, greeting);
        i++;
    }
    return 0;
}