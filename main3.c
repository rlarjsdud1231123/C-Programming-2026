#include <stdio.h>
#include <windows.h>

#define READ 0x01
#define WRITE 0x02
#define EXEC 0x04 

void exercl(void){
	int total = 7384;
	int hours = total / 3600;
	int minutes = (total % 3600) / 60;
	int seconds = total % 60;
	
	printf("[15번] %d초 -> %d 시간 %d분 %d초\n", total, hours, minutes, seconds);
}
void exercl2(void) {
	int score = 75;
	int attendance = 85;
	int passed = (score >= 60) && (attendance >= 80);
	
	printf("[16번] 점수: %d, 출석률: %d%% -> 합격여부: %s(%d)\n",
		score, attendance, passed ? "합격" : "불합격", passed);
}
void exercl3(void){
	unsigned int permission = READ | WRITE;
	permission |= EXEC;
	printf("[17번] 최종 권한 값: 0x%02X\n", permission);
}
int main() {
	SetConsoleOutputCP(65001);
	exercl();
	exercl2();
	exercl3();
}
