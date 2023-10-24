/*
// Created by Qiww on 10/24/2023.
#include "stdio.h"
#include "string.h"

int main(void) {
	char InputChar1[256], InputChar2[256];
	int Length1, Length2, Times = 0;
	gets(InputChar1);
	gets(InputChar2);
	Length1 = (int)strlen(InputChar1);
	Length2 = (int)strlen(InputChar2);
	if(Length1 != Length2){
		printf("unequal");
	}
	else {
		for(int i=0;InputChar1[i] != '\0';i++){
			if (InputChar1[i] == InputChar2[i]) {
				Times++;
			}
			else {
				printf("unequal");
				break;
			}
		}
		if(Times == Length1){
			printf("equal");
		}
	}
	return 0;
}*/
