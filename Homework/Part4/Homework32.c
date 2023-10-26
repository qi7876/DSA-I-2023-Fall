/*
// Created by Qi7 on 2023/10/16.

#include "stdio.h"
#include "string.h"

void del(char * String, int n, int len);

int main(void) {
    return 0;
}

void del(char * String, int n, int len) {
    int Length, i;
    if (String == NULL || n < 0 || len < 0) {
        printf("error\n");
        return;
    }
    for(i=0;i < n + len;i++) {
        if (String[i] == ' ') {
            printf("error\n");
            return;
        }
    }
    Length = (int)strlen(String);
    for (i = n; i < Length - n; i++) {
        String[i] = String[i + len];
    }
    for(;String[i]!='\0';i++) {
        String[i]=' ';
    }
}
*/
