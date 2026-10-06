#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// if-else 문을 사용하는 함수
void test_if_else(int grade) {
    printf("[if-else 문 실행]\n");
    if (grade == 1) {
        printf("1학년입니다.\n");
    }
    else if (grade == 2) {
        printf("2학년입니다.\n");
    }
    else if (grade == 3) {
        printf("3학년입니다.\n");
    }
    else {
        printf("잘못된 값을 입력함\n");
    }
}

// switch-case 문을 사용하는 함수
void test_switch_case(int grade) {
    printf("[switch-case 문 실행]\n");
    switch (grade) {
    case 1:
        printf("1학년입니다.\n");
        break;
    case 2:
        printf("2학년입니다.\n");
        break;
    case 3:
        printf("3학년입니다.\n");
        break;
    default:
        printf("잘못된 값을 입력함\n");
        break;
    }
}

int main() {
    int grade;

    printf("학년을 입력하세요 : ");
    scanf("%d", &grade);

    test_if_else(grade);      // if-else 출력
    printf("\n");
    test_switch_case(grade);  // switch-case 출력

    return 0;
}