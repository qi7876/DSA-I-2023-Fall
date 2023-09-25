/*
// Created by Qi7 on 2023/9/25.
#include "stdio.h"
#define SPACE ' '

int main(void)
{
    char ch;

    ch = getchar();
    while (ch != '\n')
    {
        if (ch == SPACE)
            putchar(ch);
        else
            putchar(ch + 1);
        ch = getchar();
    }
    putchar(ch);

    return 0;
}*/
