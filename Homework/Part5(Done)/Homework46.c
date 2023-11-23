/*
// Created by Qi7 on 11/16/23.

#include "stdio.h"
#include "string.h"

void SubStrNum(char * str,char * substr);

int main(void) {
    char string1[50], string2[20];
    gets(string1);
    gets(string2);
    SubStrNum(string1,string2);
    return 0;
}

void SubStrNum(char * str,char * substr) {
    int Length1 = (int)strlen(str), Length2 = (int)strlen(substr), Counter = 0, IsSame;
    int Positions[10];

    for (int i = 0; i < Length1; ++i) {
        if (str[i] == substr[0]) {
            IsSame = 1;
            for (int j = 1; j < Length2; ++j) {
                if (str[i + j] != substr[j]) {
                    IsSame = 0;
                }
            }
            if (IsSame == 1) {
                Positions[Counter] = i;
                Counter++;
                i += Length2 - 1;
            }
        }
    }
    if (Counter == 0) {
        printf("NO");
    }
    else {
        printf("%dtimes,", Counter);
        for (int k = 0; k < Counter - 1; ++k) {
        printf("%d,", Positions[k]);
        }
        printf("%d\n", Positions[Counter - 1]);
    }
}*/
