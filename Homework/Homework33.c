/*
// Created by Qi7 on 2023/10/16.

#include "stdio.h"

void bubbleSort(int data[],int n);

int main(void) {
    int UserInputDate[100], Num;
    scanf("%d", &Num);
    for (int i = 0; i < Num; ++i) {
        scanf("%d", &UserInputDate[i]);
    }
    bubbleSort(UserInputDate, Num);
    return 0;
}

void bubbleSort(int data[],int n) {
    int Temp;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (data[j] > data[j + 1]) {
                Temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = Temp;
            }
        }
    }
}*/
