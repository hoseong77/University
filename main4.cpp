//#include<stdio.h>
//
//int main(void) {
//
//	long long int a, i, j = 0, k = 0, l = 0, A = 0, B = 0, C = 0, x = 0, y = 0, z = 0;
//	scanf_s("%lld", &a);
//
//
//	for(i=1;i<=a;i++){
//		j = j + i;
//		if (i % 2 == 0) {
//			k = k + i;
//		}
//		else{
//			l = l + i;
//		}
//		if (i % 3 == 0) {
//			A = A + i;
//			x = x + 1;
//		}
//		if (i % 5 == 0) {
//			B = B + i;
//			y = y + 1;
//		}
//		if (i % 3 == 0 && i % 5 == 0) {
//			C = C + i;
//			z = z + 1;
//		}
//	}
//
//
//	printf("총합:%lld\n짝수의합:%lld\n홀수의합:%lld\n3의배수의합:%lld\n5의배수의합:%lld\n3과5의공배수의합%lld", j, k, l, A, B, C);
//	printf("\n3의배수의개수:%lld\n5의배수의개수:%lld\n3과5의공배수의개수:%lld", x, y, z);
//
//	return 0;
//}