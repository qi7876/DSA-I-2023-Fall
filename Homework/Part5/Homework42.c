/*
// Created by Qi7 on 11/6/23.
#include "stdio.h"

void * reversememcpy ( void * destination, const void * source, int num );

int main(void) {
    return 0;
}

void * reversememcpy ( void * destination, const void * source, int num ) {
    const char *src = (const char *)source;
    char *dest = (char *)destination;

    if(dest == NULL || src == NULL || num < 0 || (int)(src - dest) < num) {
        printf("error");
        return destination;
    }

    for(int i = 0; i < num; ++i) {
        dest[i] = src[num - i - 1];
    }
    return destination;
}*/
