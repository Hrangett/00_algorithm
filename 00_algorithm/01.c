#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//�̸��� ���̸� �Է¹��� �� ����Ͻÿ�

	char str[10];
	char ch =  '\0';
	int age = 0;


	printf("Age : ");
	scanf("%d", &age);
	getchar();
	printf("Nickname : ");
	scanf("%c", &ch);
	

	printf("-> name : %c, age : %d", ch, age);

	return 0;

}