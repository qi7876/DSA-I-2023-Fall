/*
#include "stdio.h"

int main(void) {
    int i, k;
    double x, n, e, b, c;
    scanf("%lf %lf", &x, &n);
    if (n >= 0) {
        e = 1, b = 1, c = 1;
        for (i = 1; i <= n;i++) {
            for (k = 1; k <= i; k++)
                b = b * x;
            for (i = 1; i < n + 1; i++)
                c = c * i;
            e = e + b / c;
        printf("%.6f", e);
        }
    }
    else
        printf("error");
    return 0;
}*/
