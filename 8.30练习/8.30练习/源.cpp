#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//列出1=10十个数字
	int num = 1;
	while (num <= 10)
	{
		printf("%d\n",num);
		num ++;
	}

	//while语句中break的使用，输出结果：1234
	int a = 1;
	while (a <= 10)
	{
		if (a == 5)
			break;
		printf("%d\n", a);
		a++;//或者可以写为 a = a + 1;
	}

	//while语句中continue的使用，输出结果：1234+步骤循环
	int b = 1;
	while (b <= 10)
	{
		if (b == 5)
			continue;
		printf("%d\n", b);
		b = b + 1;
	}

	//有关于getchar和putchar的练习，二者类似于scanf和printf
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}