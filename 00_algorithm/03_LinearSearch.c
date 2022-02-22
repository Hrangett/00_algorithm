//순차탐색 알고리즘
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
	return -1;		// 찾지 못했음을 의미하는 값 반환

}

int main(void)
{
	int arr[] = { 3,5,2,4,9 };

	int idx;
	
	idx = LSearch(arr, sizeof(arr) / sizeof(arr[0]), 4); 
	//변수 = 함수 :: 함수에 출력값이 있다는 뜻~~!
	//함수에서 출력되는 값은 레지스터에 저장, 함수의 사용이 끝남에 따라 함수에서 출력된 값이 레지스터에서 없어짐. 따라서 변수에 담아 그 값을 저장해야한다.

	if (idx == -1)
		printf("탐색 실패\n");
	else
		printf("타겟 저장 인덱스 : %d\n", idx);

	idx = LSearch(arr, sizeof(arr) / sizeof(int), 7);

	if (idx == -1)
		printf("탐색 실패\n");
	else
		printf("타겟 저장 인덱스 : %d\n", idx);

	printf("\n%c", 'N' / 'A');

	return 0;
}