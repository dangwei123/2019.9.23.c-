#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
int fun(int x, int y)
{
	static int m = 0;
	static int i = 2;
	i += m + 1;
	m = i + x + y;
	return m;
}
void main()
{
	int j = 4;
	int m = 1;
	int k = 0;
	k = fun(j, m);
	printf("%d\n", k);
	k = fun(j, m);
	printf("%d\n", k);
	return;
}
*/

/*
int change(int *px)
{
	int y = 8;
	y = y - *px;
	px = &y;
	return 0;
}
int main()
{
	int xx = 3;
	int *py = &xx;
	change(py);
	printf("%d\n", *py);
	return 0;
}
*/

/*
int main()
{
	int s = 0;
	int n = 0;
	for (n = 0; n < 4; n++)
	{
		switch (n)
		{
		default:
			s += 4;
		case 1:
			s += 1;
		case 2:
			s += 2;
		case 3:
			s += 3;
		}
	}
	printf("%d\n", s);
	return 0;
}
*/
/*输入一个整形数组，数组里有正数也有负数。数组中一个或连续的多个整数组成一个数组。
求所有子数组的和的最大值。例如输入的数组为{ 1, -2, 3, 10, -4, 7, 2, -5 }，和最大的
子数组为{3, 10, -4, 7, 2}，因此输出为该子数组的和18.*/
int Find_Maxarr(int *arr, int length)
{
	int sum = 0;
	int maxsum = 0;
	int i = 0;
	for (i = 0; i < length - 1; i++)
	{
		if (sum < 0)
		{
			sum = arr[i];
		}
		else
		{
			sum += arr[i];
		}
		if (sum>maxsum)
		{
			maxsum = sum;
		}
	}
	return maxsum;
}
int main()
{
	int arr[] = { 1, -2, 3, 10, -4, 7, 2, -5 };
	int length = sizeof(arr) / sizeof(arr[0]);
	int ret = Find_Maxarr(arr,length);
	printf("%d\n", ret);
	return 0;
}
