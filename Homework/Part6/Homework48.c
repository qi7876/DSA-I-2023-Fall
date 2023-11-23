/*
// Created by Qi7 on 11/19/23.

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
void timeprint(int time);

int main(void) {
    struct clock {
        int hour;
        int minute;
        int second;
    };
    typedef struct clock CLOCK;

    CLOCK Time;
    scanf("%d:%d:%d", &Time.hour, &Time.minute, &Time.second);

    if (Time.hour >59 || Time.minute > 59 || Time.second > 59) {
        printf("error\n");
        return 0;
    }

    timeprint(Time.hour);
    printf(":");
    timeprint(Time.minute);
    printf(":");
    timeprint(Time.second);
    printf("\n");
    return 0;
}

void timeprint(int i) {
    if (i < 10) {
        printf("0%d", i);
    } else {
        printf("%d", i);
    };
}*/
