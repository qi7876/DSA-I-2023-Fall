/*
// Created by Qiww on 2023/10/1.
#include "stdio.h"

void chline(char ch, int i, int j);

int main(void) {
    char UserInputChar;
    int UserInputRow, UserInputColumn;

    scanf("%c %d %d", &UserInputChar, &UserInputRow, &UserInputColumn);
    chline(UserInputChar, UserInputRow, UserInputColumn);
    return 0;
}

void chline(char ch, int i, int j) {
    for (int row = 0; row < i; ++row) {
        for (int column = 0; column < j; ++column) {
            printf("%c", ch);
        }
        printf("\n");
    }
}*/
