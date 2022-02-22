//!
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int mul_num(int num);
int sum_num(int num);

int main(void)
{
	int num = 0;
	int sum = 0;
	int mul = 0;
	printf("Enter : ");
	scanf("%d", &num);

	sum = num;
	mul = num;

	//for (int i = num-1; i >= 0; i--)
	//{
	//	sum += i;
	//}

	sum = sum_num(sum, num - 1);

	for (int i = num - 1; i > 0; i--)
	{
		mul = mul * i;
	}

	printf("10+ -> %d\n", sum);
	printf("10! -> %d", mul);
}

int sum_num(int sum, int num)
{
	
	sum += num;
	sum_num(sum,num - 1);

	if (num == 0)return sum;
}