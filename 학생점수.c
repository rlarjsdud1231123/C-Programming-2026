#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main()
{
    int number[SIZE];
    int max, min, sum = 0;
    double avg;

    srand(time(NULL));


    for (int i = 0; i < SIZE; i++) {
        number[i] = rand() % 101;

    }
    for (int i = 0; i < SIZE; i++) {
        printf("%d¹ø ÇÐ»ý: %dÁ¡\n", i + 1, number[i]);
    }
    max = min = number[0];

    for (int i = 0;i < SIZE; i++) {
        if (number[i] > max)
            max = number[i];
        if (number[i] < min)
            min = number[i];
        sum += number[i];
    }
    avg = (double)sum / SIZE;

    printf("\nÃÖ´ñ°ª : %d\n", max);
    printf("ÃÖ¼Ú°ª : %d\n", min);
    printf("Æò±Õ : %.2f\n", avg);

    return 0;
}