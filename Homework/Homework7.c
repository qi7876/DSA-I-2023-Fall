// Created by Qiww on 2023/9/22.
#include "stdio.h"

int main(void)
{
     double X, XSource, N, Sum = 1;
     int Multi = 1;
    scanf("%lf %lf", &X, &N);
    if (N < 0)
        printf("error");
    else
        if (X == 0)
            printf("%lf", Sum);
        else{
            XSource = X;
            for (int i = 1; i <= N; ++i) {
                Sum += (X / Multi);
                X *= XSource;
                Multi *= (i + 1);
            }
            printf("%lf", Sum);
        }
    return 0;
}
