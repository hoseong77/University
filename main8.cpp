#include<stdio.h>

int num[5], sum = 0;
void swap(int* a, int* b);

int main(void){
	
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &num[i]);
		sum = sum + num[i];
	}
;
	for (int j = 0; j < 5; j++) {
		for (int k = 0; k < 4; k++) {
			if(num[j]>num[k]){
				swap(&num[j], &num[k]);
			}
		}
	}
	printf("\n내림차순 ");
	for (int l = 0; l<5 ; l++)
				printf("%d ", num[l]);

	printf("\nsum 값 %d\n\n평균값 %d\n\n", sum, sum / 5);

	}


void swap(int* a, int* b)
{
	int c;
	printf("swap 이전 주소 %u %u %u\n", &*a, &*b, &c);
	printf("swap 이전 값 %d %d %d \n", a, b, c);

	c = *a;
	*a = *b;
	*b = c;

	printf("swap 이후 주소 %u %u %u\n", &*a, &*b, &c);
	printf("swap 이후 값 %d %d %d \n\n", a, b, c);

}

