#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int BSearch(int ar[], int len, int target)
{
	int first = 0;
	int last = len - 1;

	int mid = 0;

	while ( first <= last)
	{
		mid = (first + last) / 2;

		if (target == ar[mid])		//�߰����� target���� ��ġ �� ��� 001
		{
			return mid;
		}
		else
		{
			if (target < ar[mid])	//�߰������� target�� ���� ��� 002
			{
				printf("�޷� L���� �� ũ����\n");
				printf("last : %d->", ar[last]);
				last = mid - 1;
				printf("%d\n", ar[last]);
			}
			else					//�߰������� target�� Ŭ ��� 002
			{
				printf("�޷� �� ������\n");
				printf("first : %d->", ar[first]);
				first = mid + 1;
				printf("%d\n", ar[first]);

			}
		}
	}
	return -1;
}

int main(void)
{
	int arr[] = { 2,3,4,5,6,7,8,9 };
	int idx;

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 7);
	if (idx == -1)
		printf("====================> Ž�� ����\n\n");
	else
	{
		printf("====================> Ÿ�� ���� �ε��� : %d\n\n", idx);
	}

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 4);
	if (idx == -1)
		printf("====================> Ž�� ����...\n\n");
	else
	{
		printf("====================> Ÿ�� ���� �ε��� : %d\n\n", idx);
	}

	return 0;
}