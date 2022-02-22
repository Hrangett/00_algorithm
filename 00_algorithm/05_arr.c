#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int size;
	printf("방의 갯수를 입력하세요 : ");
	scanf("%d", &size);

	printf("-->%d개의 방이 배정되었습니다", size);

	return 0;
}