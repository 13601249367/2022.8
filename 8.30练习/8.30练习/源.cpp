#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//�г�1=10ʮ������
	int num = 1;
	while (num <= 10)
	{
		printf("%d\n",num);
		num ++;
	}

	//while�����break��ʹ�ã���������1234
	int a = 1;
	while (a <= 10)
	{
		if (a == 5)
			break;
		printf("%d\n", a);
		a++;//���߿���дΪ a = a + 1;
	}

	//while�����continue��ʹ�ã���������1234+����ѭ��
	int b = 1;
	while (b <= 10)
	{
		if (b == 5)
			continue;
		printf("%d\n", b);
		b = b + 1;
	}

	//�й���getchar��putchar����ϰ������������scanf��printf
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}