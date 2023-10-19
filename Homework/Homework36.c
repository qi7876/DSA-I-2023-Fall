/*
// Created by Qi7 on 2023/10/16.

#include "stdio.h"
#include "string.h"
#include "ctype.h"

void del(char * str);

int main(void) {
    char UserInputString[100];
    scanf("%s", UserInputString);
    del(UserInputString);
    printf("%s", UserInputString);
    return 0;
}

void del(char * str) {
    int Length, Index = 1, IsDeleting = 0;
    Length = (int)strlen(str);
    for (int i = 1; i < Length; ++i) {
        if (isalnum(str[i])) {
            IsDeleting = 0;
            str[Index] = str[i];
            Index++;
        }
        else if (str[i] == str[i - 1] && !isalnum(str[i])) {
            if (IsDeleting == 0) {
                str[Index - 1] = str[i];
            }
            IsDeleting = 1;
        }
        else {
            str[Index] = str[i];
            Index++;
        }
    }
    str[Index] = '\0';
}*/
