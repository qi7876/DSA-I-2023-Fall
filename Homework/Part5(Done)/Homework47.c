/*
// Created by Qi7 on 11/17/23.

#include "stdio.h"
#include "string.h"
#include "stdlib.h"

void my_strcat(char * destination,const char * source);
int length(const char * str);

int main(void) {
    char str1[] = "ab cdefg", str2[] = "hijk lmn";
    my_strcat(str1, str2);
    printf("%s\n", str1);
    return 0;
}
int length(const char * str) {
    int i = 0;
    while (str[i] != '\0' && str[i] != ' ') {
        i++;
    }
    return i;
}
void my_strcat(char * destination,const char * source) {
    int DesLength, SrcLength, i = 0;

    if (destination == NULL || source == NULL) {
        printf("error");
        return;
    }
    DesLength = length(destination);
    SrcLength = length(source);
    if (abs((int)(destination - source)) < SrcLength + 1) {
        printf("error");
        return;
    }
    for (i = 0; i < SrcLength; ++i) {
        destination[DesLength + i] = source[i];
    }
    destination[DesLength + i] = ' ';
}*/
