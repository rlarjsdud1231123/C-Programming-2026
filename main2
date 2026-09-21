#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PI 3.141592653589793
#define INCH_TO_CM 2.54

void exercl(void) {
    double inch, cm;
    printf("Enter inch:");
    scanf("%lf", &inch);
    cm = inch * INCH_TO_CM;
    printf("%.2f inch = %.2f cm\n\n", inch, cm);
}
void exercl2(void) {
    double C, F;
    printf("Enter C:");
    scanf("%lf", &C);
    F = (C * 1.8) + 32;
    printf("%.2f C = %.2f F\n\n", C, F);

}
void exercl3(void) {
    double r, area;
    printf("Enter r:");
    scanf("%lf", &r);
    area = r * r * PI;
    printf("Radius %.2f -> Area = %.2f\n", r, area);
}
int main() {
    int sel;

    while (1) {
        printf("1.Inch  2.Temp  3.Circle  0.Exit\nSelect: ");
        scanf("%d", &sel);

        if (sel == 0) break;
        if (sel == 1) exercl();
        else if (sel == 2) exercl2();
        else if (sel == 3) exercl3();
    }
    return 0;
}
