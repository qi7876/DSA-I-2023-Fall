/*
// Created by Qi7 on 2023/9/21.
#include "stdio.h"

int main(void)
{
    int A, B, a, b, c;
    scanf("%d %d", &A, &B);
    a = A;
    b = B;
    c = A % B;
    while (c != 0)
    {
        A = B;
        B = c;
        c = A % B;
    }
    printf("%d,%d", B, a * b / B);
    return 0;
}
*/
