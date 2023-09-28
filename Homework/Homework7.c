/*
#include "stdio.h"

int main(void)
{
    double X4e, XOrigin, Sum = 1, N;
    long long int Multi = 1;
    scanf("%lf %lf", &X4e, &N);
    if (N < 0)
        printf("error");
    else
        if (X4e == 0)
            printf("%lf", Sum);
        else{
            XOrigin = X4e;
            for (int i = 1; i <= N; ++i) {
                Sum += (X4e / Multi);
                X4e *= XOrigin;
                Multi *= (i + 1);
            }
            printf("%.6lf\n", Sum);
        }
    return 0;
}*/
