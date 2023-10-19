/*
// Created by Qi7 on 2023/10/16.
#include <stdio.h>

void swap(int * Array, int ArrayNum);

int main(void) {
    int UserInputArray[100], Counter;
    scanf("%d", &Counter);
    for (int i = 0; i < Counter; ++i) {
        scanf("%d", &UserInputArray[i]);
    }
    swap(UserInputArray, Counter);
    return 0;
}

void swap(int * Array, int ArrayNum) {
    int Temp;
    if (ArrayNum <= 0 || Array == 0) {
        printf("error");
        return;
    }
    Temp = Array[0];
    Array[0] = Array[ArrayNum - 1];
    Array[ArrayNum - 1] = Temp;
}*/
