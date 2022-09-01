#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	////输入的所有字符中，只有数字字符可以被打印出来，如：12AB => 12
	//char ch = '\0';
	//while ((ch = getchar()) != EOF)
	//{
	//	if (ch < '0' || ch > '9')//‘0’到‘9’数字字符对应ASCII表
	//		continue;
	//	putchar(ch);
	//}

	////getchar和putchar练习：密码的输入
	//int ret = 0;
	//int ch = 0;
	//char password[20] = { 0 };
	//printf("请输入密码:");
	//scanf("%s", password);
	//while ((ch = getchar()) != '\n')
	//{
	//	;
	//}
	//printf("请确认密码（Y/N）：");
	//printf("%s\n", &password);
	//ret = getchar();
	//if (ret == 'Y')
	//{
	//	printf("\n确认成功\n");
	//}
	//else if(ret == 'N')
	//{
	//	printf("\n确认失败");
	//}
	//else
	//{
	//	printf("输入错误，请重试");
	//}

	//for语句的练习
	int a = 0;
	for (a = 1; a <= 10; a++)//for(初始条件；判断条件；调整条件)
	{
		printf("%d\n", a);
	}
	return 0;
}