/*
// Created by Qiww on 2023/9/21.
#include "stdio.h"
#include "math.h"

int main(void)
{
    int UserInputNum, Remainder, Divisor = 2;
    scanf("%d", &UserInputNum);
    if (UserInputNum <= 3)
        printf("error");
    else {
        Remainder = UserInputNum % Divisor;
        while (Remainder != 0 && Divisor < sqrt((double)UserInputNum - 1)) {
            Divisor++;
            Remainder = UserInputNum % Divisor;
        }
        if (Remainder == 0)
            printf("no");
        else
            printf("yes");
    }
    return 0;
}
*/
