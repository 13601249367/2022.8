#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//��ϰһ
 	int day = 0;
	printf("�������ڼ�����ϰһ\n");
	scanf("%d", &day);
	switch (day)
	{
		case 1:
			printf("����һ");
			break;
		case 2:
			printf("���ڶ�");
			break;
		case 3:
			printf("������");
			break;
		case 4:
			printf("������");
			break;
		case 5:
			printf("������");
			break;
		case 6:
			printf("������");
			break;
		case 7:
			printf("������");
			break;
	}
	//��ϰ����
	int a = 0;
	printf("\n�������ڼ�����ϰ��\n");
	scanf("%d", &a);
	switch (a)
	{
		case 1:
			printf("����һ");
			break;
		case 2:
			printf("���ڶ�");
			break;
		case 3:
			printf("������");
			break;
		case 4:
			printf("������");
			break;
		case 5:
			printf("������");
			break;
		case 6:
			printf("������");
			break;
		case 7:
			printf("������");
			break;
		default:
			printf("�������������");
			break;
	}

	//��ϰ����
	int b = 0;
	printf("\n��������Ϣ�ջ��ǹ����գ���ϰ��\n");
	scanf("%d\n", &b);
	switch (b)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("������");
			break;
		case 6:
		case 7:
			printf("��Ϣ��");
			break;
		default:
			printf("����");
			break;
		return 0;
	}

	return 0;
}