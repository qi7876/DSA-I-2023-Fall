/*
#include<stdio.h>

int index(char s[], char t[])
{
	int i, j, k;
	for (i = 0; s[i] != '\0'; i++) {
        for(j = 0;;j++) {
            if(s[i + j] == t[j]) {
                if(t[j + 1] == '\0') {
                    return i;
                }
            }
            else {
                break;
            }
        }
	}
	return(-1);
}

int main()
{
	static char src[256];
	static char dst[256];
	
	gets(src);
	gets(dst);
	
	printf("%d", index(src, dst));

	return 0;
}
*/
