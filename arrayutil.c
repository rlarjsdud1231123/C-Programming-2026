#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "arrayutil.h"

int maxFindArray(int* array, int size)
{
    if (array == NULL || size <= 0) return INT_MIN;

    int max = *array;
    for (int i = 1; i < size; i++) {
        if (max < *(array + i)) max = array[i];
    }
    return max;
}

void printArray(int* start, int size)
{
    if (start != NULL) {
        for (int i = 0; i < size; i++)
            printf("%d ", *(start + i));
    }
    printf("\n");
}

void inputArray(int* start, int size)
{
    if (start == NULL || size <= 0) return;

    for (int i = 0; i < size; i++)
        *(start + i) = rand() % 1000;
}

void copyArray(int* target, int* source, int size)
{
    if (target == NULL || source == NULL || size <= 0) return;

    /* 복사할 영역이 겹치는 경우도 처리 */
    memmove(target, source, (size_t)size * sizeof(int));
}

void initArray(int* array, int size, int initVal)
{
    if (array == NULL || size <= 0) return;

    for (int i = 0; i < size; i++) {
        array[i] = initVal;
    }
}

void dec_to_bin(int* bin, int dec, int size)
{
    if (bin == NULL || size <= 0) return;

    initArray(bin, size, 0);

    if (dec < 0) {
        printf("dec must be nonnegative\n");
        return;
    }

    /* 변환 결과를 저장할 공간이 충분한지 먼저 확인 */
    int remaining = dec;
    int available = size;

    while (remaining != 0 && available > 0) {
        remaining /= 2;
        available--;
    }

    if (remaining != 0) {
        printf("array is full\n");
        return;
    }

    size--;
    while (dec != 0) {
        bin[size] = dec % 2;
        size--;
        dec /= 2;
    }
}

void diceTest(int* dice, int count)
{
    if (dice == NULL || count <= 0) return;

    for (int i = 0; i < count; i++) {
        int number = rand() % 6;

        if (dice[number] == INT_MAX) {
            printf("dice count is full\n");
            return;
        }

        dice[number]++;
    }
}

int checkArray(int* lotto, int size, int number)
{
    if (lotto == NULL || size <= 0) return 0;

    for (int i = 0; i < size; i++) {
        if (*(lotto + i) == number) {
            return 1;
        }
    }
    return 0;
}

void lottoGame(int* lotto, int size)
{
    if (lotto == NULL || size <= 0 || size > 45) return;

    int number;
    int flag;

    for (int i = 0; i < size; i++) {
        number = (rand() % 45) + 1;
        flag = checkArray(lotto, i, number);

        if (flag == 1) {
            i--;
        }
        else {
            *(lotto + i) = number;
        }
    }
}