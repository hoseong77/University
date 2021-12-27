/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[5];
	int math[5];
	int digital[5];
	int k = 0;
	
	for(int i =0 ;i<5;i++){
		printf("학생 %d, math, digital : ",i+1);
		scanf(" %c %d %d", &name[i], &math[i], &digital[i]);
	}

	for (int j = 0; j < 5; j++) {
		printf("%c %d %d\n", name[j], math[j], digital[j]);
	}
	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			if (name[j] < name[j + 1])
			{
				int temp = name[j];
				name[j] = name[j + 1];
				name[j + 1] = temp;
				temp = math[j];
				math[j] = math[j + 1];
				math[j + 1] = temp;
				temp = digital[j];
				digital[j] = digital[j + 1];
				digital[j + 1] = temp;
			}
		}
	}
	printf("name정렬 : \n");

	for (int j = 4; j>=0; j--) {
		printf("name, math, digital : ");
		printf("%c %d %d\n", name[j], math[j], digital[j]);
	}
	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			if (math[j] < math[j + 1])
			{
				int temp = name[j];
				name[j] = name[j + 1];
				name[j + 1] = temp;
				temp = math[j];
				math[j] = math[j + 1];
				math[j + 1] = temp;
				temp = digital[j];
				digital[j] = digital[j + 1];
				digital[j + 1] = temp;
			}
		}
	}

	printf("math정렬 : \n");

	for (int j = 4; j >= 0; j--) {
		printf("name, math, digital : ");
		printf("%c %d %d\n", name[j], math[j], digital[j]);
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			if (digital[j] < digital[j + 1])
			{
				int temp = name[j];
				name[j] = name[j + 1];
				name[j + 1] = temp;
				temp = math[j];
				math[j] = math[j + 1];
				math[j + 1] = temp;
				temp = digital[j];
				digital[j] = digital[j + 1];
				digital[j + 1] = temp;
			}
		}
	}

	printf("digital정렬 : \n");

	for (int j = 4; j >= 0; j--) {
		printf("name, math, digital : ");
		printf("%c %d %d\n", name[j], math[j], digital[j]);
	}
	return 0;
}*/