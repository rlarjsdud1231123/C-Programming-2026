#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exerc() {
    int year, month;
    int days;

    printf("연도와 월 입력 (예: 2024 2) : ");
    scanf("%d %d", &year, &month);

    // [10번] switch-case를 이용한 월별 일 수 계산
    switch (month) {
    case 2:
        // [12번] 2월은 윤년 여부에 따라 28일 또는 29일
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            days = 29;
        }
        else {
            days = 28;
        }
        break;

    case 4: case 6:
    case 9: case 11:
        days = 30;
        break;

    case 1: case 3: case 5: case 7:
    case 8: case 10: case 12:
        days = 31;
        break;

    default:
        printf("잘못된 월입니다. 1~12 사이의 값을 입력하세요.\n");
        return;
    }

    printf("%d년 %d월은 %d일까지 있습니다.\n", year, month, days);
}

int main() {
    exerc();
    return 0;
}
 
