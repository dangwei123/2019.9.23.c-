#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*要求写一个函数，将字符串中的空格替换成%20.样例："abc defgx yz"
转换成"abc%20defgx%20yz"*/
int My_strlen(char *str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + My_strlen(str+1);
	}
}
void Replace_(char *str,int length)
{
	char *cur = str;
	
	char *end = str+length-1;
	while (*cur != '\0')
	{
		if (*cur == ' ')
		{
			length+=2;
			end = str + length - 1;
			while (end != cur)
			{
				*(end + 2) = *(end);
				end--;
			}
			*cur = '%';
			*(cur + 1) = '2';
			*(cur + 2) = '0';
		}
		cur++;
	}
}

int main()
{
	char str[20] = "abc defgx yz";
	int length = My_strlen(str);
	Replace_(str,length);
	printf("%s\n", str);
	return 0;
}