//�ΰ��� ������ �Է¹޾�ū���� �������� ã�� ����ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int max = 0, min = 0;

	int temp = 0;

	int nums[5] = { 0 };

	printf("�ټ����� ������ �Է��Ͻÿ�\n");
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

	//printf("�ټ����� ������ �Է��Ͻÿ�\n-> ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d", nums[i]);
		if (i == 4)break;
		printf(" -> ");
	}

	return 0;
	
}