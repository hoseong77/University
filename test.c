#include<stdio.h>
#include<time.h> //���� �õ� ����� -> srand((unsigned int)time(NULL))
#include<stdlib.h> //rand()�Լ� MAX��(1~MAX����) -> rand() % RAND_MAX + 1
#include<string.h> //strcpy�Լ���� string�� ����
int main(void){
	//����ü name, ���� : N => name ��� N ��� ����
	struct name
	{
		int a;
		char b[20];
	}N;

	struct name n1; //����ü ���� �Ҵ�
	struct name* size;
	int n;

	n1.a = 10;
	strcpy(n1.b, "�ȳ�");
	//n1.b = "�ȳ�"; ==> ���� || strcpy( . ,"");

	//srand�Լ��� time�� NULL�����Ͽ� ������ �õ��ʱ�ȭ random ����
	srand((unsigned int)time(NULL));

	//���� ���� 10�� ���� ==> ���� srand �Լ� ������ ���� �� �ݺ�
	for (int i = 0; i < 10; i++) {
		int num = rand() % RAND_MAX + 1;
		printf("���� %d : %d\n", i + 1, num);
	}

	//���� �޸� �Ҵ�
	scanf_s("%d", &n);
	size = (struct name*)malloc(n*sizeof(struct name));
	if (size == NULL) {
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}
	free(size) //�Ҵ���� ���� �ݳ�

	//strcat ==> s + "asd"
	strcat(s, "adf");

	//strcmp ==> a,b���ڿ� ��
	strcmp(a, b);
	//strlen ==> ���ڿ� ����
	//strcpy ==> ���ڿ� ���� b�� a��
	strcpy(a, b);
	//strncpy ==> n��ŭ ���� b�� a�� n��ŭ
	strncpy(a, b, 6);
	typedef �������ڷ��� ���ο��ڷ��� ==> typedef int int32 : int ��� int32 ����

	enum name {};

}
