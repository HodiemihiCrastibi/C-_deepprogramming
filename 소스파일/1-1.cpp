#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char name[50], date[20], greeting[50];
    int student_id;
    int i = 1;

    // 정보 입력 받기
    // printf("이름을 입력하세요: ");
    scanf("%s", name);

    // printf("학번을 입력하세요: ");
    scanf_s("%d", &student_id);

    // printf("날짜를 입력하세요: ");
    scanf("%s", date);

    // printf("인사말을 입력하세요: ");
    scanf("%s", greeting);

    // 10회 출력
    while (i <= 10) {
        // printf("\n\n=== %d번째 출력 ===\n", i);
        printf("%s %d %s %s\n", name, student_id, date, greeting);
        i++;
    }
    return 0;
}