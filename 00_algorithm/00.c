//두개의 정수를 입력받아큰값과 작은값을 찾아 출력하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int max = 0, min = 0;

	int temp = 0;

	int nums[5] = { 0 };

	printf("다섯개의 정수를 입력하시오\n");
	for (int i = 0; i < 5; i++)
	{
		printf("->");
		scanf("%d", &nums[i]);
	}
	
	for (int i = 4; i >= 0 ; i--)
	{
		printf("i : %d\n", i);
		printf("j :");
		for (int j = 0; j <= i; j++)
		{
			printf("%d, ", j);
			printf("( %d ), ", nums[j]);
			if (nums[j] < nums[j+1])
			{
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
			printf("->( %d ), ", nums[j]);
		}
		printf("\n");
	}

	//printf("다섯개의 정수를 입력하시오\n-> ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d", nums[i]);
		if (i == 4)break;
		printf(" -> ");
	}

	return 0;
	
}