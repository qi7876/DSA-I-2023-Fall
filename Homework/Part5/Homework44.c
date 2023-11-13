// Created by Qi7 on 11/13/23.
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

int main(void) {
    int UserInputNum, token, Max, MaxIndex, Min, MinIndex;
    int Nums[20];
    char NumString[100];

    scanf("%d", &UserInputNum);
    if (UserInputNum < 1) {
        printf("error");
        return 0;
    }

    fflush(stdin);
    gets(NumString);
    token = atoi(strtok(NumString, " "));   /*切割字符串，并将字符串转化为整数*/
    Max = Min = token;
    MaxIndex = MinIndex = 1;

    /*找出最大值和最小值及其对应位置*/
    for (int i = 0; i < UserInputNum; ++i) {
        token = atoi(strtok(NULL, " "));
        if (Max < token) {
            Max = token;
            MaxIndex = i + 1;
        }
        if (Min > token) {
            Min = token;
            MinIndex = i + 1;
        }
    }

    printf("max:%d,position:%d\n", (int)Max, (int)MaxIndex);
    printf("min:%d,position:%d\n", (int)Min, (int)MinIndex);
    return 0;
}