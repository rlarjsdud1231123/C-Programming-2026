#ifndef ARRAYUTIL_H
#define ARRAYUTIL_H

void printArray(int* start, int size);
void inputArray(int* start, int size);
void copyArray(int* target, int* source, int size);
void dec_to_bin(int* bin, int dec, int size);
void initArray(int* array, int size, int initVal);
void diceTest(int* dice, int count);
void lottoGame(int* lotto, int size);
int checkArray(int* lotto, int size, int number);
int maxFindArray(int* array, int size);

#endif