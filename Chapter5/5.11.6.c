/*
// Created by Qiww on 2023/9/19.
#include "stdio.h"

int main(void)
{
    int MoneyDays, EverydayMoneyAdd, FirstDayMoney, MoneySum;
    printf("Days Add First\n");
    scanf("%d %d %d", &MoneyDays, &EverydayMoneyAdd, &FirstDayMoney);
    MoneySum = FirstDayMoney * FirstDayMoney;
    for (int DaysCounter = 1; DaysCounter < MoneyDays; ++DaysCounter)
    {
        MoneySum += (FirstDayMoney += EverydayMoneyAdd) * FirstDayMoney;
    }
    printf("The total of money is %d", MoneySum);
    return 0;
}
*/
