#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isleapyear(int year) {
	int isleap = 0;

	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				isleap = 1;
			}
			else {
				isleap = 0;
			}
		}
		else {
			isleap = 1;
		}
	}
	else {
		isleap = 0;
	}
	return isleap;
}

void exerc(void) {
	int year;

	while (1) {
		printf("\ninput year(종료할려면 0 이라 입력 : ");
		scanf("%d", &year);

		if (year <= 0) {
			printf("유효하지 않은 입력입니다. 프로그램을 종료합니다.\n");
			break;
		} 

		if (isleapyear(year) == 1) {
			printf("%d년은 윤년입니다.\n", year);
			
		}
		else {
			printf("%d년은 평년입니다.\n", year);
		}
	}
}
int main(void) {
	exerc();
	return 0;
}