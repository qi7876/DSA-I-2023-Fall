// Created by Qi7 on 2023/10/16.

#include "stdio.h"
#include "string.h"

void del(char * String, int n, int len);

int main(void) {
    char UserInputString[100];
    int FirstChar, DeleteCharNum;
    scanf("%d", &FirstChar);
    scanf("%d", &DeleteCharNum);
    scanf("%s", UserInputString);

    del(UserInputString, FirstChar, DeleteCharNum);
    return 0;
}

void del(char * String, int n, int len) {
    int Length;
    Length = (int)strlen(String);
    if (String == NULL || n < 0 || len < 0) {
        printf("error\n");
        return;
    }
    for (int i = n; i < Length - n; i++) {
        String[i] = String[i + len];
    }
    String[Length - len] = '\0';
}