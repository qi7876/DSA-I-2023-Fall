/*
// Created by Qi7 on 2023/10/16.

#include "stdio.h"
#include "string.h"
#include "ctype.h"

int CalString(char *str);

int main(void) {
    char UserInputString[100];
    scanf("%s", UserInputString);
    printf("%d", CalString(UserInputString));
    return 0;
}

int CalString(char *str) {
    int Length, Counter = 0;
    Length = (int)strlen(str);
    for (int i = 0; i < Length; ++i) {
        if (!isalnum(str[i])) {
            Counter++;
        }
    }
    return Counter;
}*/
