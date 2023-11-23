/*
// Created by Qi7 on 11/16/23.
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

int fun(const char *p, int result[]);

int main(void) {
    char StudentNum[] = "2012019050001";
    int Result[4];
    fun(StudentNum, Result);
    getchar();
    return 0;
}

int fun(const char *p, int result[]) {
    char Year[5], College[3], Class[5], Number[4];
    if (p == NULL || result == NULL) {
        return 0;
    }
    if (p[13] != '\0') {
        return 0;
    }
    for (int i = 0; i < 14; ++i) {
        if (0 <= *(p + i) && *(p + i) <= 9 && *(p + i) != '\0') {
            continue;
        }
        else {
            return 0;
        }
    }
    strncpy(Year, p, 4);
    strncpy(College, p + 4, 2);
    strncpy(Class, p + 6, 4);
    strncpy(Number, p + 10, 3);

    Year[5] = '\0';
    College[3] = '\0';
    Class[5] = '\0';
    Number[4] = '\0';

    result[0] = atoi(Year);
    result[1] = atoi(College);
    result[2] = atoi(Class);
    result[3] = atoi(Number);
    return 1;
}
*/
