// Created by Qi7 on 2023/9/21.
#include "stdio.h"

int main(void)
{
    char UserInputAlpha;
    scanf("%c", &UserInputAlpha);
    UserInputAlpha -= 4;
    for (int i = 1; i < 6; ++i) {
        for (int j = 0; j < (5 - i); ++j) {
            printf(" ");
        }
        for (int a = 0; a < i; ++a) {
            printf("%c", UserInputAlpha + a);
        }
        for (int ra = 1; ra < i; ++ra) {
            printf("%c", UserInputAlpha + i - ra - 1);
        }
        printf("\n");
    }
    return 0;
}