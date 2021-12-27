#include<stdio.h>
#include<time.h> //랜덤 시드 변경용 -> srand((unsigned int)time(NULL))
#include<stdlib.h> //rand()함수 MAX값(1~MAX까지) -> rand() % RAND_MAX + 1
#include<string.h> //strcpy함수사용 string값 대입
int main(void){
	//구조체 name, 별명 : N => name 대신 N 사용 가능
	struct name
	{
		int a;
		char b[20];
	}N;

	struct name n1; //구조체 변수 할당
	struct name* size;
	int n;

	n1.a = 10;
	strcpy(n1.b, "안녕");
	//n1.b = "안녕"; ==> 오류 || strcpy( . ,"");

	//srand함수로 time을 NULL변경하여 난수의 시드초기화 random 가능
	srand((unsigned int)time(NULL));

	//랜덤 난수 10개 생성 ==> 이전 srand 함수 없으면 같은 수 반복
	for (int i = 0; i < 10; i++) {
		int num = rand() % RAND_MAX + 1;
		printf("난수 %d : %d\n", i + 1, num);
	}

	//동적 메모리 할당
	scanf_s("%d", &n);
	size = (struct name*)malloc(n*sizeof(struct name));
	if (size == NULL) {
		printf("메모리 할당 오류\n");
		exit(1);
	}
	free(size) //할당받은 공간 반납

	//strcat ==> s + "asd"
	strcat(s, "adf");

	//strcmp ==> a,b문자열 비교
	strcmp(a, b);
	//strlen ==> 문자열 길이
	//strcpy ==> 문자열 복사 b를 a로
	strcpy(a, b);
	//strncpy ==> n만큼 복사 b를 a로 n만큼
	strncpy(a, b, 6);
	typedef 기존의자료형 새로운자료형 ==> typedef int int32 : int 대신 int32 가능

	enum name {};

}
