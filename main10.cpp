/*
#include<stdio.h>

int strlen(char *len);
char* strcat(char *s,const char *w);

int main(void) {
	char s_1[] = "abcdefgh";
	char s_2[11] = "Hello ";
	int len = strlen(s_1);
	strcat(s_2, "word");
	printf("문자열 %s의 길이 = %d\n", s_1, len);
	printf("%s\n",s_2);

}

int strlen(char* len)
{
	int l = 0;
	while (len[l] != NULL) {
		l++;
	}
	return l;
}

char* strcat(char* s,const char* w)
{
	while (*s != NULL)
		*s++;
	while (*w != NULL) {
		*s = *w;
		*w++;
		*s++;
	}
	*s = NULL;

	return s;
}
*/
