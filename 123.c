#include <stdio.h>
#define SIZE 7
int main()
{
    int scores[SIZE] = {1,2,3,4,5,6,7};//scores[SIZE];�� ����?
    int i;
    float sum = 0;
    int j=0;
    int temp;

    for (i = 0; i < 7; i++) {

        j = i + 1;
        if (scores[i] < scores[j]) {
            temp = scores[i];
            scores[i] = scores[j];
            scores[j] = temp;// swap ��������
        }

        sum = sum + scores[i]; //���� 

    }



    printf("%.f\n", sum);
    printf("%f\n", sum / SIZE);
    for (int l = 0; l < 7; l++)
        printf("%d ", scores[l]); //1���� 7���� �� �������� How?
}
