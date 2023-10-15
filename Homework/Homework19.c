// Created by Qiww on 2023/10/14.

#include "stdio.h"

int main(void) {
    int ModNum, Mod[20][2];
    scanf("%d", &ModNum);
    for (int i = 0; i < ModNum; ++i) {
        for (int j = 0; j < 2; ++j) {
            scanf("%d", &Mod[i][j]);
        }
    }
}
