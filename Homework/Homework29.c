/*
// Created by Qiww on 2023/10/14.

#include "stdio.h"

void find(int n);

int main(void) {
    int UserInputNum;
    scanf("%d", &UserInputNum);
    find(UserInputNum);
    return 0;
}

void find(int n) {
    int Divisor[300], Index = 0, Sum = 0;
    n = (n > 30000)? 30000: n;
    for (int i = 1; i <= n; ++i) {
        Index = 0;
        Sum = 0;
        for (int j = 1; j <= i / 2; ++j) {
            if (i % j == 0) {
                Divisor[Index] = j;
                Sum += j;
                Index++;
            }
        }
        if (i == Sum) {
            printf("%d=", i);
            for (int k = 0; k < Index - 1; ++k) {
                printf("%d+", Divisor[k]);
            }
            printf("%d\n", Divisor[Index - 1]);
        }
    }
}*/
