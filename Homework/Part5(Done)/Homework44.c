#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int UserInputNum, token, Max, MaxIndex, Min, MinIndex;
    // int Nums[20];
    char NumString[100], *TokenPos;

    scanf("%d\n", &UserInputNum);
    if (UserInputNum < 1) {
        printf("too few\n");
        return 0;
    }

    // fflush(stdin);  DO NOT use it!
    fgets(NumString, 100, stdin);
    TokenPos = strtok(NumString, " ");
    if (TokenPos == NULL) {
        printf("not enough\n");
        return 0;
    }
    token = atoi(TokenPos);   /*切割字符串，并将字符串转化为整数*/
    Max = Min = token;
    MaxIndex = MinIndex = 1;

    /*找出最大值和最小值及其对应位置*/
    for (int i = 1; i < UserInputNum; ++i) {
        TokenPos = strtok(NULL, " ");
        if (TokenPos == NULL) {
            printf("not enough\n");
            return 0;
        }
        token = atoi(TokenPos);
        if (Max < token) {
            Max = token;
            MaxIndex = i + 1;
        }
        if (Min > token) {
            Min = token;
            MinIndex = i + 1;
        }
    }
    // optional: next call to strtok should return NULL. otherwise, there are extra nums
    printf("max:%d,position:%d\n", Max, MaxIndex);
    printf("min:%d,position:%d\n", Min, MinIndex);
    return 0;
}