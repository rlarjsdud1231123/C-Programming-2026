#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void problem1(void);
void problem2(void);
void problem3(void);

int main(void) {
    int menu;

    while (1) {
        printf("\n===== Control Practice =====\n");
        printf("1. 유효한 점수 세 개\n");
        printf("2. 같은 숫자 세 번 연속\n");
        printf("3. 속이 빈 정사각형\n");
        printf("0. 종료\n");
        printf("선택: ");

        scanf("%d", &menu);

        switch (menu) {
        case 1:
            problem1();
            break;

        case 2:
            problem2();
            break;

        case 3:
            problem3();
            break;

        case 0:
            printf("프로그램 종료\n");
            return 0;

        default:
            printf("잘못된 입력입니다.\n");
        }
    }
}

void problem1(void) {
    int score;
    int count = 0;
    int sum = 0;

    while (1) {
        printf("점수 입력: ");
        scanf("%d", &score);

        if (score == -1) {
            break;
        }

        if (score >= 0 && score <= 100) {
            sum += score;
            count++;

            if (count == 3) {
                break;
            }
        }
        else {
            printf("유효하지 않은 점수입니다.\n");
        }
    }

    if (count == 0) {
        printf("입력된 점수가 없습니다.\n");
    }
    else {
        printf("유효한 점수 개수: %d\n", count);
        printf("평균: %.2f\n", (double)sum / count);
    }
}

void problem2(void) {
    int num;
    int prev = -1;
    int same_count = 0;
    int total_count = 0;

    while (1) {
        printf("1~9 숫자 입력: ");
        scanf("%d", &num);

        if (num < 1 || num > 9) {
            printf("1~9 사이 숫자를 입력하세요.\n");
            continue;
        }

        total_count++;

        if (num == prev) {
            same_count++;
        }
        else {
            same_count = 1;
        }

        prev = num;

        if (same_count == 3) {
            break;
        }
    }

    printf("%d가 3번 연속 입력되었습니다.\n", num);
    printf("전체 입력 횟수: %d\n", total_count);
}

void problem3(void) {
    int n;

    printf("n 입력: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }

        printf("\n");
    }
}