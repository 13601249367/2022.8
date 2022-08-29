#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//练习一
 	int day = 0;
	printf("今天星期几？练习一\n");
	scanf("%d", &day);
	switch (day)
	{
		case 1:
			printf("星期一");
			break;
		case 2:
			printf("星期二");
			break;
		case 3:
			printf("星期三");
			break;
		case 4:
			printf("星期四");
			break;
		case 5:
			printf("星期五");
			break;
		case 6:
			printf("星期六");
			break;
		case 7:
			printf("星期日");
			break;
	}
	//练习二：
	int a = 0;
	printf("\n今天星期几？练习二\n");
	scanf("%d", &a);
	switch (a)
	{
		case 1:
			printf("星期一");
			break;
		case 2:
			printf("星期二");
			break;
		case 3:
			printf("星期三");
			break;
		case 4:
			printf("星期四");
			break;
		case 5:
			printf("星期五");
			break;
		case 6:
			printf("星期六");
			break;
		case 7:
			printf("星期日");
			break;
		default:
			printf("输入错误，请重试");
			break;
	}

	//练习三：
	int b = 0;
	printf("\n今天是休息日还是工作日？练习三\n");
	scanf("%d\n", &b);
	switch (b)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("工作日");
			break;
		case 6:
		case 7:
			printf("休息日");
			break;
		default:
			printf("错误");
			break;
		return 0;
	}

	return 0;
}