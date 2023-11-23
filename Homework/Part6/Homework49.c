/*
// Created by Qi7 on 11/20/23.

#include "stdio.h"

int cal ( int *pData, int iLen ) {
    if (iLen < 1 || pData == NULL) {
        return 0;
    }
    extern int max_val, min_val, ave_val;
    int Total;
    max_val = min_val = ave_val = Total = *pData;
    for (int i = 1; i < iLen; ++i) {
        Total += pData[i];
        if (pData[i] > max_val) {
            max_val = pData[i];
        }
        if (pData[i] < min_val) {
            min_val = pData[i];
        }
    }
    ave_val = Total / iLen;
    return 1;
}
*/
