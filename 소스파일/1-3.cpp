#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[10];
    int i, j, temp;

    // 데이터 입력 받기
    printf("데이터 출력: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // 오름차순으로 정렬하기
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // 정렬된 배열 출력하기
    printf("정렬된 배열: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
