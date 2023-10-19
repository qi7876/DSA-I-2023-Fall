/*
// Created by Qiww on 2023/10/14.

#include "stdio.h"
#include "ctype.h"

int main(void) {
    int ModNum, Mod[20][2], AllSum = 0, Sum = 1;
    if (scanf("%d", &ModNum) && (ModNum > 0)) {
        for (int i = 0; i < ModNum; ++i) {
            for (int j = 0; j < 2; ++j) {
                scanf("%d", &Mod[i][j]);
            }
        }
    }
    else {
        printf("error");
        return 0;
    }

    for (int i = 0; i < ModNum; ++i) {
        Sum = 1;
        Sum *= Mod[i][1];
        for (int j = 0; j < ModNum; ++j) {
            if (i != j) {
                Sum *= Mod[j][0];
            }
        }
        AllSum += Sum;
    }

    Sum = 1;
    for (int i = 0; i < ModNum; ++i) {
        Sum *= Mod[i][0];
    }

    while ((AllSum - Sum) > 0) {
        AllSum -= Sum;
    }

    printf("%d", AllSum);
    return 0;
}
*/
