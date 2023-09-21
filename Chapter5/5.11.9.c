/*
// Created by Qi7 on 2023/9/19.
#include "stdio.h"

#define KELVIN 273.16
void temperatures(double Temp);

int main(void)
{
    double UserInputTemp;
    printf("Please enter(q to quit)\n");
    while (scanf("%lf", &UserInputTemp) == 1)
    {
        temperatures(UserInputTemp);
        printf("Please enter(q to quit)\n");
    }
    return 0;
}

void temperatures(double Temp)
{
    printf("S:%.2lf\n", 5.0 / 9.0 * (Temp - 32.0));
    printf("K:%.2lf\n", 5.0 / 9.0 * (Temp - 32.0) + 273.16);
    printf("H:%.2lf\n", Temp);
}
*/
