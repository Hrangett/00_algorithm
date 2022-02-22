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

		if (target == ar[mid])		//중간값과 target값이 일치 할 경우 001
		{
			return mid;
		}
		else
		{
			if (target < ar[mid])	//중간값보다 target이 작을 경우 002
			{
				printf("메롱 Lㅐ가 더 크지롱\n");
				printf("last : %d->", ar[last]);
				last = mid - 1;
				printf("%d\n", ar[last]);
			}
			else					//중간값보다 target이 클 경우 002
			{
				printf("메롱 더 작지롱\n");
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
		printf("====================> 탐색 실패\n\n");
	else
	{
		printf("====================> 타겟 저장 인덱스 : %d\n\n", idx);
	}

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 4);
	if (idx == -1)
		printf("====================> 탐색 실패...\n\n");
	else
	{
		printf("====================> 타겟 저장 인덱스 : %d\n\n", idx);
	}

	return 0;
}