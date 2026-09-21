#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
void exercl(void) {
	int mid, final, assignment;

	printf("[과제 1] 중간고사, 기말고사, 과제 점수를 입력하세요.:");
	scanf("%d %d %d", &mid, &final, &assignment);

	double weighted_score = (mid * 0.3) + (final * 0.4) + (assignment * 0.3);

	printf("weighted_score=%.2f\n\n", weighted_score);
}
void exercl2(void) {
	double height, weight;

	printf("[과제 2] 키(m)와 몸무게(kg)를 입력하세요.:");
	scanf("%lf %lf", &height, &weight);

	double bmi = weight / (height * height);

	printf("bmi=%.2f\n", bmi);
}
int main(void) {
	SetConsoleOutputCP(65001);
	exercl();
	exercl2();
}
