//#include <stdio.h>
//#define num 99999
//int main(void) {
//	int a=0,i;
//	int number[num];
//	scanf_s("%d", &a);
//	printf("0b");
//	for(i=1;i>0;i++){
//		if (a % 2 == 0)
//		{
//			a = a / 2;
//			number[i] = 0;
//		}
//		else
//		{
//			a = a / 2;
//			number[i] = 1;
//		}
//		if (a == 0)
//			break;
//	}
//	for(i;i>0;i--)
//		printf("%d",number[i]);
//}
//int a = 0,i=0;
//scanf_s("%d", &a); 
//for (i = 31; i >= 0; i--) //10000=>1000=>100 내려오면서 a와 비교 ex) a = 10 => 1010  ->  1<<i가 1000일때 멈춤(1에서 i만큼 왼쪽이동)
//{ 
//	if (a&(1 << i)) { 
//		break; 
//	} 
//} 
//printf("0b");
//for (i; i >= 0; i--) {
//	if (a&(1 << i)) { 
//		printf("1"); 
//	} 
//	else { 
//		printf("0"); 
//	}
//} 
//return 0;