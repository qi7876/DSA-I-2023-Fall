/*
// Created by Qiww on 2023/10/14.

#include "stdio.h"

int main(void) {
    char UserInputString[257];
    int IsBlank = 1, Counter = 0;
    gets(UserInputString);

    for (int i = 0; UserInputString[i] != '\0'; ++i) {
        if (UserInputString[i] == ' ') {
            IsBlank = 1;
        }
        else if (IsBlank == 1) {
            IsBlank = 0;
            Counter++;
        }
    }
    printf("%d", Counter);
    return 0;
}*/
