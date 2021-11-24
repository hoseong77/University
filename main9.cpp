// 9-1

#include<stdio.h>
#include<stdlib.h>
/*
void SumN(unsigned int *array, unsigned int k);

int main(void) {

	unsigned int Ul_array[100],k;
	for (int j = 0;j<100;j++)
		Ul_array[j] = rand()%20000;
	scanf_s("%d", &k);
	SumN(Ul_array, k);

	return 0;
}

void SumN(unsigned int* array, unsigned int k)
{
	int sum = 0;
	for (int i = 0; i*k < 100; i++) {
		sum = sum + array[i*k];
		printf("%d\n", array[i*k]);
	}
	printf("รัวี : %d\n", sum);
}
*/


//9-2

int func(int i, int j);

int main(void) {
	
	int in[4][4];
	double doub[4][4];
	char ch[4][4]; 
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			printf("addr.of ch[%d][%d] = %8x.\n", i, j, &ch[i][j]);

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			printf("addr.of in[%d][%d] = %8x.\n", i, j, &in[i][j]);

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			printf("addr.of doub[%d][%d] = %8x.\n", i, j, &doub[i][j]);


	

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			printf("addr.of ch[%d][%d] = %8x.\n", i, j, ((char*)ch + func(i, j)));

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			printf("addr.of in[%d][%d] = %8x.\n", i, j, ((int*)in + func(i, j)));

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			printf("addr.of doub[%d][%d] = %8x.\n", i, j, ((double*)doub + func(i, j)));
	
}



int func(int i, int j) {
	return i * 4 + j;
}