#include <stdio.h>
#define SIZE 7
int main()
{
    int scores[SIZE] = {1,2,3,4,5,6,7};//scores[SIZE];은 못씀?
    int i;
    float sum = 0;
    int j=0;
    int temp;

    for (i = 0; i < 7; i++) {

        j = i + 1;
        if (scores[i] < scores[j]) {
            temp = scores[i];
            scores[i] = scores[j];
            scores[j] = temp;// swap 내림차순
        }

        sum = sum + scores[i]; //총합 

    }



    printf("%.f\n", sum);
    printf("%f\n", sum / SIZE);
    for (int l = 0; l < 7; l++)
        printf("%d ", scores[l]); //1부터 7까지 다 나오려면 How?
}
