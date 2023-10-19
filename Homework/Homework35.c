/*
// Created by Qi7 on 2023/10/16.

#include "stdio.h"

int ReverseArray(int array[], int size);

int main(void) {
    int UserInputArray[100], Size;
    scanf("%d", &Size);
    for (int i = 0; i < Size; ++i) {
        scanf("%d", &UserInputArray[i]);
    }
    ReverseArray(UserInputArray, Size);
    return 0;
}

int ReverseArray(int array[], int size) {
    int Temp;
    if (size <= 0) {
        return 0;
    }
    for (int i = 0; i < (size / 2); ++i) {
        Temp = array[i];
        array[i] = array[size - i];
        array[size - i] = Temp;
    }
    return 1;
}*/
