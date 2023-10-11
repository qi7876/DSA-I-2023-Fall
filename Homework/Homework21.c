// Created by Qiww on 2023/10/10.

#include "stdio.h"
#include "string.h"

int main(void) {
    char UserInputStr1[100], UserInputStr2[100];
    int StrLength1, StrLength2, MaxLength;
    scanf("%s", UserInputStr1);
    scanf("%s", UserInputStr2);
    StrLength1 = (int)strlen(UserInputStr1);
    StrLength2 = (int)strlen(UserInputStr2);
    MaxLength = StrLength1 > StrLength2 ? StrLength1 : StrLength2;
    for (int i = 0; i < MaxLength; ++i) {
        if (UserInputStr1[i] != UserInputStr2[i]) {
            printf("%d", UserInputStr1[i] - UserInputStr2[i]);
            return 0;
        }
    }
}