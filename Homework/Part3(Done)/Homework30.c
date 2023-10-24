/*
// Created by Qiww on 2023/10/14.

#include "stdio.h"

void minmax(int s[]);

int main(void) {
    int StudentsScore[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &StudentsScore[i]);
    }
    minmax(StudentsScore);
    return 0;
}

void minmax(int s[]) {
    int Min, Max, Average, Sum = 0;
    Min = Max = s[0];
    for (int i = 0; i < 10; ++i) {
        Min = (Min > s[i])?s[i]:Min;
        Max = (Max < s[i])?s[i]:Max;
        Sum += s[i];
    }
    Average = Sum / 10;
    printf("%d,%d,%d", Min, Max, Average);
}*/
