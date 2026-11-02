
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main()
{
    int number[SIZE];
    int temp;

    // 1. 숫자 10개 입력
    for (int i = 0; i < SIZE; i++) {
        printf("%d번째 숫자 입력 : ", i + 1);
        scanf("%d", &number[i]);
    }

    // 2. 버블 정렬 (내림차순)
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - 1 - i; j++) {
            if (number[j] < number[j + 1]) {
                temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }

    // 3. 정렬된 숫자 출력
    printf("\n내림차순 정렬 결과 : ");

    for (int i = 0; i < SIZE; i++) {
        printf("%d ", number[i]);
    }

    return 0;
}
