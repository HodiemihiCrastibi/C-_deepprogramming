#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[10];
    int i, j, temp;

    // ������ �Է� �ޱ�
    printf("������ ���: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // ������������ �����ϱ�
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // ���ĵ� �迭 ����ϱ�
    printf("���ĵ� �迭: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
