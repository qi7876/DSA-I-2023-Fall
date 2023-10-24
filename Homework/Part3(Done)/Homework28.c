/*
// Created by Qiww on 2023/10/14.

#include "stdio.h"

int find(int n);
int cube(int n);

int main(void) {
    int UserInputNum;
    scanf("%d", &UserInputNum);
    printf("%d", find(UserInputNum));
    return 0;
}

int cube(int n) {
    return n*n*n;
}

int find(int n) {
    int OnesPlace, TensPlace, HundredsPlace, Counter = 0;
    if (n > 999 || n < 100) {
        return 0;
    }
    else {
        for (int i = 100; i <= n; ++i) {
            HundredsPlace = i / 100;
            TensPlace = (i / 10) % 10;
            OnesPlace = i % 10;
            if (i == cube(OnesPlace) + cube(TensPlace) + cube(HundredsPlace)) {
                Counter++;
            }
        }
        return Counter;
    }
}*/
