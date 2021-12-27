#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
struct point
{
	int x;
	int y;
};


int main(void) {
	struct point x[100];
	struct point y[100];
	int temp;
	int j = 0;

	srand((unsigned int)time(NULL));

	for (int i = 0; i < 100; i++) {

		x[i].x = rand() % RAND_MAX + 1;
		y[i].y = rand() % RAND_MAX + 1;	
	}
	for(int i=0;i<100;i++){
		for (int j = 0; j < 99; j++) {
			if (x[j].x > x[j+1].x) {
				temp = x[j].x;
				x[j].x = x[j + 1].x;
				x[j + 1].x = temp;
				temp = y[j].y;
				y[j].y = y[j + 1].y;
				y[j + 1].y = temp;
			}
		}
	}

	printf("x값 오름차순\n");
	for (int i = 0; i < 100; i++) {
		printf("%d  : (%d,%d)\n", i+1, x[i].x, y[i].y);
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 99; j++) {
			if (y[j].y > y[j + 1].y) {
				temp = x[j].x;
				x[j].x = x[j + 1].x;
				x[j + 1].x = temp;
				temp = y[j].y;
				y[j].y = y[j + 1].y;
				y[j + 1].y = temp;
			}
		}
	}

	printf("y값 내림차순\n");
	for (int i = 99; i >= 0; i--) {
		printf("%d  : (%d,%d)\n", 100-i, x[i].x, y[i].y);
	}
}


*/