#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	////����������ַ��У�ֻ�������ַ����Ա���ӡ�������磺12AB => 12
	//char ch = '\0';
	//while ((ch = getchar()) != EOF)
	//{
	//	if (ch < '0' || ch > '9')//��0������9�������ַ���ӦASCII��
	//		continue;
	//	putchar(ch);
	//}

	////getchar��putchar��ϰ�����������
	//int ret = 0;
	//int ch = 0;
	//char password[20] = { 0 };
	//printf("����������:");
	//scanf("%s", password);
	//while ((ch = getchar()) != '\n')
	//{
	//	;
	//}
	//printf("��ȷ�����루Y/N����");
	//printf("%s\n", &password);
	//ret = getchar();
	//if (ret == 'Y')
	//{
	//	printf("\nȷ�ϳɹ�\n");
	//}
	//else if(ret == 'N')
	//{
	//	printf("\nȷ��ʧ��");
	//}
	//else
	//{
	//	printf("�������������");
	//}

	//for������ϰ
	int a = 0;
	for (a = 1; a <= 10; a++)//for(��ʼ�������ж���������������)
	{
		printf("%d\n", a);
	}
	return 0;
}