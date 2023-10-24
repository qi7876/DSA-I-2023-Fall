/*
// Created by Qiww on 2023/10/13.

#include "stdio.h"

void tran(int array[5][3], int out_array[3][5]);

int main(void) {
    int UserInputMatrix[5][3], TranMatrix[3][5];
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d", &UserInputMatrix[i][j]);
        }
    }
    tran(UserInputMatrix, TranMatrix);
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%d", TranMatrix[i][j]);
        }
    }
    return 0;
}

void tran(int array[5][3], int out_array[3][5]) {
    if (array == NULL || out_array == NULL) {
        printf("error");
    }
    else {
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 3; ++j) {
                out_array[j][i] = array[i][j];
            }
        }
    }
}*/
