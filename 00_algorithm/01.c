#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//이름과 나이를 입력받은 후 출력하시오

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