/*
// Created by Qi7 on 2023/9/21.
#include "stdio.h"
#include "string.h"

int main(void)
{
    char UserInputString[40];
    int WordIndex;
    printf("Please enter a word:\n");
    scanf("%s", UserInputString);
    WordIndex = (int)strlen(UserInputString);
    while (WordIndex > 0)
    {
        printf("%c", UserInputString[WordIndex - 1]);
        WordIndex--;
    }
    return 0;
}*/
