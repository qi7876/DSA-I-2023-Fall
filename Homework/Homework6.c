/*
// Created by Qiww on 2023/9/22.
#include "stdio.h"

int main(void)
{
    int SideLength = 0, HalfSideLength;
    scanf("%d", &SideLength);
    if (SideLength < 1 || SideLength > 80 || SideLength % 2 == 0)
        printf("error");
    else{
        HalfSideLength = (SideLength - 1) / 2;
        for (int i = 0; i <= HalfSideLength; ++i) {
            for (int j = 0; j < HalfSideLength - i; ++j) {
                printf(" ");
            }
            for (int k = 0; k < (i * 2 + 1); ++k) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
*/
