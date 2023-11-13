/*
// Created by Qi7 on 11/6/23.
#include "stdio.h"
#include "string.h"

void insert(char * s1,char * s2, int n);

int main(void) {
	int InputNum;
	char InputChar1[256], InputChar2[256], c;
	if (scanf("%d", &InputNum) == 0) {
		printf("error");
		return 0;
	}
    while ((c = getchar()) != '\n' && c != EOF);

	gets(InputChar1);
	gets(InputChar2);
	insert(InputChar1, InputChar2, InputNum);
    printf("%s", InputChar1);
	return 0;
}

void insert(char * s1,char * s2, int n) {
	int Length1 = 0, Length2 = 0;
    for (int i = 0;s1[i] != ' ' && s1[i] != '\0';i++) {
        Length1++;
    }
    for (int i = 0;s2[i] != ' ' && s2[i] != '\0';i++) {
        Length2++;
    }

	if (n > Length1 || n < 0){
		printf("error");
		return;
	}
    if (s1 == NULL || s2 == NULL) {
        printf("error");
        return;
    }
	for (int i = 0;i <= Length2 + 1;i++){
		s1[Length1 + Length2 - i - 1] = s1[Length1 - 1 - i];
	}
	for (int i = 0;i < Length2;i++){
		s1[n + i] = s2[i];
	}
	s1[Length1 + Length2] = ' ';
}*/
