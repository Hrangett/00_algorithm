//����Ž�� �˰���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int LSearch(int *ar, int len, int target)
{

	int i;

	for (i = 0; i < len; i++)
	{
		if (ar[i] == target)
			return i;

	}
	return -1;		// ã�� �������� �ǹ��ϴ� �� ��ȯ

}

int main(void)
{
	int arr[] = { 3,5,2,4,9 };

	int idx;
	
	idx = LSearch(arr, sizeof(arr) / sizeof(arr[0]), 4); 
	//���� = �Լ� :: �Լ��� ��°��� �ִٴ� ��~~!
	//�Լ����� ��µǴ� ���� �������Ϳ� ����, �Լ��� ����� ������ ���� �Լ����� ��µ� ���� �������Ϳ��� ������. ���� ������ ��� �� ���� �����ؾ��Ѵ�.

	if (idx == -1)
		printf("Ž�� ����\n");
	else
		printf("Ÿ�� ���� �ε��� : %d\n", idx);

	idx = LSearch(arr, sizeof(arr) / sizeof(int), 7);

	if (idx == -1)
		printf("Ž�� ����\n");
	else
		printf("Ÿ�� ���� �ε��� : %d\n", idx);

	printf("\n%c", 'N' / 'A');

	return 0;
}