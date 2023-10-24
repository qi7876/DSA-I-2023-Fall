/*
// Created by Qi7 on 2023/10/13.
#include "stdio.h"
#include "string.h"
#include "ctype.h"

int main(void) {
    char UserInputString[51], LastChar, CurrentChar;
    int StringLength;
    scanf("%s", UserInputString);
    StringLength = (int)strlen(UserInputString);
    for (int i = 0; i < StringLength; ++i) {
        CurrentChar = UserInputString[i];
        if (CurrentChar == '\0') {
            break;
        }
        else if (isalnum(CurrentChar)) {
            printf("%c", CurrentChar);
        }
        else if (CurrentChar != LastChar) {
            printf("%C", CurrentChar);
        }
        LastChar = CurrentChar;
    }
    return 0;
}*/
