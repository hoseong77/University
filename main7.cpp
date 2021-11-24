//#include<stdio.h>
//
//void prime_detect(int i);
//void prime_print(int i);
//void prinme_CNT(int i);
//void prinme_sum(int i);
//
//
//
//int main(void) {
//	int a = 0;
//	scanf_s("%d", &a);
//
//	prime_detect(a);
//	prime_print(a);
//	prinme_CNT(a);
//	prinme_sum(a);
//}
//
//
//void prime_detect(int i)
//{
//	int k = 0;
//	for (int j = 2; j < i; j++) {
//		if (i % j == 0)
//			k++;
//	}
//	if (k == 0)
//		printf("소수\n");
//	else
//		printf("소수아님\n");
//
//}
//
//void prime_print(int i)
//{
//	int j=0;
//	for(int k=1;k<=i;k++){
//		for (j = 2; j <= k; j++) {
//			if (k % j == 0)
//				break;
//		}
//		if (j == k)
//			printf("%d ", k);
//	}
//
//}
//
//void prinme_CNT(int i)
//{
//	int j=0,l=0;
//	for (int k = 1; k <= i; k++) {
//		for (j = 2; j <= k; j++) {
//			if (k % j == 0)
//				break;
//		}
//		if (j == k)
//			l++;
//	}
//	printf("\n%d", l);
//}
//
//void prinme_sum(int i)
//{
//	int j=0, l=0;
//	for (int k = 1; k <= i; k++) {
//		for (j = 2; j <= k; j++) {
//			if (k % j == 0)
//				break;
//		}
//		if (j == k)
//			l=l+k;
//	}
//	printf("\n%d", l);
//}
//
