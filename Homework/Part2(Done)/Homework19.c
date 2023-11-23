/*
#include "stdio.h"

int main(void) {
    int TotalNum, IsCorrect = 1, Result = 0;
    int Rows[10], LastRow[10];

    scanf("%d", &TotalNum);
    if (TotalNum <= 0) {
        printf("error\n");
        return 0;
    }
    for (int i = 0; i < TotalNum; ++i) {
        scanf("%d", &Rows[i]);
        scanf("%d", &LastRow[i]);
    }
    while (1) {
        IsCorrect = 1;
        Result++;
        for (int i = 0; i < TotalNum; ++i) {
            if (Result % Rows[i] != LastRow[i]) {
                IsCorrect = 0;
                break;
            }
        }
        if (IsCorrect == 1) {
            printf("%d", Result);
            break;
        }
    }
}
*/
