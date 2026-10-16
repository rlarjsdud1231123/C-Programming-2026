#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void exerc() {
    int year, month;
    int days;

    printf("연도와 월 입력 (예: 2024 2) : ");
    scanf("%d %d", &year, &month);

    /*
    [10번]
    1~12월 중 하나를 입력받아
    switch-case로 해당 월의 일 수를 구하는 부분
    */
    switch (month) {
    case 2:

        /*
        [12번]
        10번 문제에서 2월을 윤년 여부에 따라
        28일 또는 29일로 구분하도록 확장한 부분
        */
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            days = 29;  // 윤년
        }
        else {
            days = 28;  // 평년
        }
        break;

    case 4: case 6:
    case 9: case 11:
        days = 30;
        break;

    default:
        days = 31;
        break;
    }

    printf("%d년 %d월은 %d일까지 있습니다.\n", year, month, days);
}

int main() {
    exerc();
    return 0;
}
