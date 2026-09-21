#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h> 

#define PI 3.141592653589793
#define INCH_TO_CM 2.54

void exercl(void) {
    double inch, cm;
    printf("인치(inch) 입력: ");
    if (scanf("%lf", &inch) != 1) {
        printf("잘못된 입력입니다.\n\n");
        while (getchar() != '\n');
        return;
    }
    cm = inch * INCH_TO_CM;
    printf("%.2f 인치 = %.2f cm\n\n", inch, cm);
}

void exercl2(void) {
    double C, F;
    printf("섭씨(C) 입력: ");
    if (scanf("%lf", &C) != 1) {
        printf("잘못된 입력입니다.\n\n");
        while (getchar() != '\n');
        return;
    }
    F = (C * 1.8) + 32;
    printf("%.2f ℃ = %.2f ℉\n\n", C, F);
}

void exercl3(void) {
    double r, area;
    printf("반지름(r) 입력: ");
    if (scanf("%lf", &r) != 1) {
        printf("잘못된 입력입니다.\n\n");
        while (getchar() != '\n');
        return;
    }
    area = r * r * PI;
    printf("반지름 %.2f -> 넓이 = %.2f\n\n", r, area);
}

int main() {
    SetConsoleOutputCP(65001); 

    int sel;

    while (1) {
        printf("1.인치변환  2.온도변환  3.원의넓이  0.종료\n선택: ");

        if (scanf("%d", &sel) != 1) {
            printf("\n잘못된 입력입니다. 숫자를 입력하세요.\n\n");
            while (getchar() != '\n');
            continue;
        }

        if (sel == 0) {
            printf("프로그램을 종료합니다.\n");
            break;
        }

        printf("\n");

        if (sel == 1) exercl();
        else if (sel == 2) exercl2();
        else if (sel == 3) exercl3();
        else printf("잘못된 메뉴 번호입니다.\n\n");
    }

    return 0;
}