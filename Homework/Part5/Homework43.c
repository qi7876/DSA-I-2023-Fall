/*
// Created by Qi7 on 11/6/23.
#include "string.h"
#include "stdio.h"

int SubStrNum(char * str,char * substr);

int main(void) {
    char str1[256], str2[256];
    gets(str1);
    gets(str2);
    printf("%d", SubStrNum(str1, str2));
    return 0;
}

int SubStrNum(char * str,char * substr) {
    int Length1 = (int)strlen(str), Length2 = (int)strlen(substr), Counter = 0, IsSame;
    for (int i = 0; i < Length1; ++i) {
        if (str[i] == substr[0]) {
            IsSame = 1;
            for (int j = 1; j < Length2; ++j) {
                if (str[i + j] != substr[j]) {
                    IsSame = 0;
                }
            }
            if (IsSame == 1) {
                Counter++;
                i += Length2 - 1;
            }
        }
    }
    printf("match times=%d", Counter);
    return Counter;
}*/
