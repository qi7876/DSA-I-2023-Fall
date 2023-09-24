/*
// Created by Qiww on 2023/9/21.
#include "stdio.h"

int main(void)
{
    int UserInputNum, Sum = 0, MultiSum = 1;
    scanf("%d", &UserInputNum);
    if (1 <= UserInputNum && UserInputNum <= 10){
        for (int i = 1; i <= UserInputNum; ++i) {
            MultiSum *= i;
            Sum += MultiSum;
        }
        printf("%d\n", Sum);
    }
    else
        printf("error");
    return 0;
}*/
