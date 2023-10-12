// Created by Qi7 on 2023/10/12.

#include "stdio.h"

int main(void) {
    int Years, Months;
    scanf("%d %d", &Years, &Months);
    Months %= 12;
    switch (Months) {
        case 2:
            if (Years % 4 == 0)
                printf("days:29");
            else
                printf("days:28");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("days:30");
            break;
        default:
            printf("days:31");
    }
}