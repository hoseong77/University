/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


struct point
{
	int x;
	int y;
};


int main() {
	int temp;
	int j = 0;
	int np;


	srand((unsigned int)time(NULL));

	scanf_s("%d", &np);


	struct point* x = (struct point*)malloc(sizeof(struct point) * (np + 1));
	struct point* y = (struct point*)malloc(sizeof(struct point) * (np + 1));

	for (int i = 0; i < np; i++) {

		x[i].x = rand() % RAND_MAX + 1;
		y[i].y = rand() % RAND_MAX + 1;
	}
	for (int i = 0; i < np; i++) {
		for (int j = 0; j < np - 1; j++) {
			if (x[j].x > x[j + 1].x) {
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
	for (int i = 0; i < np; i++) {
		printf("%d  : (%d,%d)\n", i + 1, x[i].x, y[i].y);
	}

	scanf_s("%d %d", &(x[np].x),&(y[np].y));

	for (int i = 0; i < np+1; i++) {
		for (int j = 0; j < np; j++) {
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
	for (int i = np; i >= 0; i--) {
		printf("%d  : (%d,%d)\n", np+1 - i, x[i].x, y[i].y);
	}
}
*/