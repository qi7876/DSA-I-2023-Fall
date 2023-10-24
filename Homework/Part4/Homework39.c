/*
// Created by Qiww on 10/24/2023.
#include "stdio.h"

int main(void) {
	char UserInputChar[20], Output[40];
	int Index = 0;
	scanf("%s", UserInputChar);
	for(int i=0;UserInputChar[i] != '\0';i++) {
		Output[Index] = UserInputChar[i];
		if((i + 1) % 2 == 0 && UserInputChar[i + 1] != '\0') {
			Index++;
			Output[Index] = '*';
		}
		Index++;
	}
	Output[Index] = '\0';
	printf("%s\n", Output);
	return 0;
}*/
