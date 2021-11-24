//#include<stdio.h>
//#define number 10
//
/////과제 5-1
//int main(void) {
//	int temp,num[number];
//	float sum = 0;
//	for(int i=0; i<7;i++){
//		scanf_s("%d", &num[i]);
//		sum = sum + num[i];
//	}
//	printf("\n%.f\n%f\n", sum,sum/7);
//
//
//	for (int k = 1; k < 7; k++)
//		for (int j = 0; j<=k; j++)
//			if (num[k] > num[j]) {
//				temp = num[k];
//				num[k] = num[j];
//				num[j] = temp;
//			}
//	for (int l = 0; l < 7; l++)
//		printf("%d", num[l]);
//	printf("\n");
//	for (int l = 6;l>=0;l--)
//		printf("%d", num[l]);
//	printf("\n%d\n%d\n%d", num[6], num[0], num[3]);
//
//	return 0;
//
//
//	
//}	
////////과제2
/**/
//int main(void) {
//	long long int a, b, c,d=0,i=0,j=0,k=0,l=0;
//	scanf_s("%lld%lld", &a, &b);
//
//	if (a < b) {
//		c = a; a = b; b = c;
//	}
//	printf("공약수:");
//	for (c = 1; c <= a; c++) {
//		if (a % c == 0 && b%c==0) {
//			printf("%lld ",c);
//			j = j+1;
//			d = c;
//		}
//	}
//
//
//
//	printf("\n공약수 개수 : %lld\n최대공약수 : %lld\n최소공배수 : %lld", j,d,a*b/d);
//}










